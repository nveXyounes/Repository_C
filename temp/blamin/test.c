#ifndef _UTIL_H_
    #include "util.h"
#endif // _UTIL_H_

#ifndef _MATH_H_
    #include "math.h"
#endif // _MATH_H_

#ifndef _DATA_H_
    #include "data.h"
#endif // _DATA_H_

#ifndef _WINUTIL_H_
    #include "winutil.h"
#endif // _WINUTIL_H_

#ifndef _BILLIARDS_H_
    #include "billiards.h"
#endif // _BILLIARDS_H_

#include "resource.h"

//-------------------------------------------------
#define SIZE_DRAW_RECT    600
#define WIDTH_INFO_RECT   200

#define SIZE_X_WINDOW (SIZE_DRAW_RECT + WIDTH_INFO_RECT)
#define SIZE_Y_WINDOW (SIZE_DRAW_RECT + 0)
//-------------------------------------------------
#define WM_FREETIME   (WM_USER + 1)
#define WM_GOTO       (WM_USER + 2)
//-------------------------------------------------
// WND_PROC
//-------------------------------------------------
// donnees du programme
typedef struct tagDATA_WINDOW
  {
  HWND              hwnd;
  HWND              hdlg;
  int               widthDlg;
  DWORD             t0;

  BILLIARDS         billiards1;
  BILLIARDS         billiards2;
  BILLIARDS         billiards3;
  BILLIARDS         billiards4;

  RECT              rcDraw;
  }DATA_WINDOW,*P_DATA_WINDOW,**PP_DATA_WINDOW;


//-------------------------------------------------
BOOL CALLBACK infoDialogProc(HWND hdlg,UINT iMsg,WPARAM wParam,LPARAM lParam)
{
switch(iMsg)
  {
  case WM_INITDIALOG:
    {
    return TRUE;
    }
  case WM_COMMAND:
    {
    return SendMessage(GetParent(hdlg),iMsg,wParam,lParam);
    }
  }

return FALSE;
} // infoDialogProc()

//-------------------------------------------------
int WndProc(P_MY_WINDOW myWindow,HWND hwnd,UINT iMsg,WPARAM wParam,LPARAM lParam)
{
P_DATA_WINDOW data;

data = (P_DATA_WINDOW)myWindow->userData;

switch(iMsg)
  {
  // creation de la fentre
    case WM_CREATE:
    {
    HWND  hdlg;
    RECT  rcInfo;
    
    // style de fenetre
    myWindow->bResizedWindow   = TRUE;
    myWindow->bUseBackBuffer   = TRUE;
    myWindow->colorBackGround  = NO_COLOR;
    // les billards
    InitBilliards(hwnd,&data->billiards1,-6.,+6.,5.,RGB(240,240,240));
    InitBilliards(hwnd,&data->billiards2,+6.,+6.,5.,RGB(240,240,240));
    InitBilliards(hwnd,&data->billiards3,-6.,-6.,5.,RGB(240,240,240));
    InitBilliards(hwnd,&data->billiards4,+6.,-6.,5.,RGB(240,240,240));

    // billard #1
    InsertBallBilliards(&data->billiards1,1.,1.,RGB_CYAN  ,-9,+6,10.,0.);
    InsertBallBilliards(&data->billiards1,1.,1.,RGB_VIOLET,-6,+9,0.,15.);
    // billard #2
    InsertBallBilliards(&data->billiards2,1.,1,RGB_RED    ,+6,+6,25.,1.);
    InsertBallBilliards(&data->billiards2,1.,1,RGB_BLUE   ,+6,+9,0.,0.);
    InsertBallBilliards(&data->billiards2,1.,1,RGB_GREEN  ,+6,+3,0.,0.);
    InsertBallBilliards(&data->billiards2,1.,1,RGB_BLACK  ,+9,+6,0.,0.);
    InsertBallBilliards(&data->billiards2,1.,1,RGB_YELLOW ,+3,+6,0.,0.);
    // billard #3
    InsertBallBilliards(&data->billiards3,9,3,RGB_BLACK ,-6,-6,1.,1.);
      {
      double  R,r,x0,y0;
      int     i,n;
      R   = 4.;
      r   = .5;
      x0  = -6.;
      y0  = -6.;
      n   = 6;

      for(i=0;i<n;i++)
        {
        double theta0,theta1;
        theta0 = ((2*i+0)*MATH_PI)/n;
        theta1 = ((2*i+1)*MATH_PI)/n;
        InsertBallBilliards(&data->billiards3,r*r,r,RGB_RED ,x0+R*cos(theta0),y0+R*sin(theta0),-0.3,-0.3);
        InsertBallBilliards(&data->billiards3,r*r,r,RGB_BLUE,x0+R*cos(theta1),y0+R*sin(theta1),-0.3,-0.3);
        }
      }
    // billard #4
      {
      double    r,x0,y0;
      int       i,n,iColor;
      COLORREF  arrayColor[] = {RGB_RED,RGB_VIOLET,RGB_GREEN,RGB(0,128,0),RGB_BLUE,RGB_CYAN,RGB_YELLOW,RGB_ORANGE};
      r       = 0.05;
      x0      = +6.;
      y0      = -6.;
      n       = 500;
      iColor  = 0;
      for(i=0;i<n;i++)
        {
        double R,theta,vx,vy;

        R     = RandomDouble(0.,5.-r);
        theta = RandomDouble(0.,2.*MATH_PI);
        vx    = RandomDouble(-10.,10.);
        vy    = RandomDouble(-10.,10.);
        InsertBallBilliards(&data->billiards4,r*r,r,arrayColor[iColor],x0+R*cos(theta),y0+R*sin(theta),vx,vy);

        iColor = (iColor + 1) % COUNT(arrayColor);
        }
      }

    // les informations
    data->hwnd      = hwnd;
    hdlg = CreateDialog(myGetInst(hwnd),MAKEINTRESOURCE(ID_DIALOG_INFO),hwnd,infoDialogProc);
    data->hdlg      = hdlg;
    GetWindowRect(hdlg,&rcInfo);
    data->widthDlg  = myWidthRect(&rcInfo);

    SetDlgItemInt(hdlg,ID_EDIT_NB_BALL1,data->billiards1.allBall.nElem,FALSE);
    SetDlgItemInt(hdlg,ID_EDIT_NB_BALL2,data->billiards2.allBall.nElem,FALSE);
    SetDlgItemInt(hdlg,ID_EDIT_NB_BALL3,data->billiards3.allBall.nElem,FALSE);
    SetDlgItemInt(hdlg,ID_EDIT_NB_BALL4,data->billiards4.allBall.nElem,FALSE);
    
    data->t0 = GetTickCount();
    SendMessage(hwnd,WM_GOTO,0,0);
    break;
    }
  case WM_SIZE:
    {
    int cx,cy;
    cx = LOWORD(lParam);
    cy = HIWORD(lParam);
    SetWindowPos(data->hdlg,HWND_TOP,0,0,data->widthDlg,cy,SWP_SHOWWINDOW);
    mySetRectWH(&data->rcDraw,data->widthDlg,0,max1(cx - data->widthDlg),max1(cy));
    break;
    }
  // bouton gauche de la souris
  case WM_LBUTTONDOWN:
    {    
    break;
    }
  // les touches
  case WM_KEYDOWN:
    {
    switch((int)wParam)
      {
      case VK_ESCAPE: // on veut quitter
        {
        DestroyWindow(hwnd);
        break;
        }
      }
    break;
    }
  // messages utilisateurs
  case WM_USER:
    {
    switch(LOWORD(wParam))
      {
      }
    break;
    }
  // le commandes
  case WM_COMMAND:
    {
    HWND hdlg;
    hdlg = data->hdlg;
    switch(LOWORD(wParam))
      {
      case IDC_CHECK_DRAW_CRASH1:
        data->billiards1.bDrawCrash = (BST_CHECKED == SendMessage(GetDlgItem(hdlg,IDC_CHECK_DRAW_CRASH1),BM_GETCHECK,0,0));
        myRepaintWindow(hwnd);
        break;
      case IDC_CHECK_DRAW_CRASH2:
        data->billiards2.bDrawCrash = (BST_CHECKED == SendMessage(GetDlgItem(hdlg,IDC_CHECK_DRAW_CRASH2),BM_GETCHECK,0,0));
        myRepaintWindow(hwnd);
        break;
      case IDC_CHECK_DRAW_CRASH3:
        data->billiards3.bDrawCrash = (BST_CHECKED == SendMessage(GetDlgItem(hdlg,IDC_CHECK_DRAW_CRASH3),BM_GETCHECK,0,0));
        myRepaintWindow(hwnd);
        break;
      case IDC_CHECK_DRAW_CRASH4:
        data->billiards4.bDrawCrash = (BST_CHECKED == SendMessage(GetDlgItem(hdlg,IDC_CHECK_DRAW_CRASH4),BM_GETCHECK,0,0));
        myRepaintWindow(hwnd);
        break;
      }
    break;
    }
  case WM_GOTO:
    {
    DWORD   dt;
    double  t;

    dt = GetTickCount() - data->t0;
    t  = dt/1000.;

    AdvanceTimeBilliards(&data->billiards1,t);
    AdvanceTimeBilliards(&data->billiards2,t);
    AdvanceTimeBilliards(&data->billiards3,t);
    AdvanceTimeBilliards(&data->billiards4,t);

    mySetDlgItemDouble(data->hdlg,ID_EDIT_TIME1,data->billiards1.t,2);
    mySetDlgItemDouble(data->hdlg,ID_EDIT_TIME2,data->billiards2.t,2);
    mySetDlgItemDouble(data->hdlg,ID_EDIT_TIME3,data->billiards3.t,2);
    mySetDlgItemDouble(data->hdlg,ID_EDIT_TIME4,data->billiards4.t,2);

    SetDlgItemInt(data->hdlg,ID_EDIT_NB_CRASH1,data->billiards1.allCrash.tree.nElem,FALSE);
    SetDlgItemInt(data->hdlg,ID_EDIT_NB_CRASH2,data->billiards2.allCrash.tree.nElem,FALSE);
    SetDlgItemInt(data->hdlg,ID_EDIT_NB_CRASH3,data->billiards3.allCrash.tree.nElem,FALSE);
    SetDlgItemInt(data->hdlg,ID_EDIT_NB_CRASH4,data->billiards4.allCrash.tree.nElem,FALSE);

    myRepaintWindow(hwnd);
    break;
    }
  case WM_FREETIME:
    {
    SendMessage(hwnd,WM_GOTO,0,0);
    break;
    }
  // on dessine
    case WM_PAINT:
    {
    P_MY_HDC      hdc;
    int           cx,cy;

    hdc   = (P_MY_HDC)wParam;
    cx    = myWindow->cx;
    cy    = myWindow->cy;

    // on dessine le fond
      {
      myPushBrush(hdc,BS_SOLID,RGB_WHITE,0);
      myFillRect(hdc,&data->rcDraw);
      myPopBrush(hdc);
      }
    // on affiche l'animation
      {
      MY_GRAPH      graph;
      RECTD         rcd;
      double        xmin,xmax,ymin,ymax;

      xmin  = -12.;
      xmax  = +12.;
      ymin  = -12.;
      ymax  = +12.;

      mySetRectd(&rcd,xmin,ymax,xmax,ymin);
      mySetWindowGraph(&graph,&data->rcDraw);
      mySetViewGraph(&graph,&rcd,myMinAspectRatio,NULL);

      // on affiche les billards
      DrawBilliards(&data->billiards1,hdc,&graph);
      DrawBilliards(&data->billiards2,hdc,&graph);
      DrawBilliards(&data->billiards3,hdc,&graph);
      DrawBilliards(&data->billiards4,hdc,&graph);
      }
        break;
    }
  // destruction de la fenetre
    case WM_DESTROY:
    {
    CloseBilliards(&data->billiards1);
    CloseBilliards(&data->billiards2);
    CloseBilliards(&data->billiards3);
    CloseBilliards(&data->billiards4);
    PostQuitMessage(0);
        break;
    }
  }

return 0;
} // WndProc()


//-------------------------------------------------
// WINMAIN
//-------------------------------------------------
int WINAPI WinMain(
                   HINSTANCE  hInstance,
                   HINSTANCE  hPrevInstance, 
                   LPSTR      lpszCmdLine,
                   int        iCmdShow
                   )       
{
WNDCLASSEX    wc;
RECT          rc;
P_MY_WINDOW   myWindow;
HWND          hwnd,hdlg;
P_DATA_WINDOW data;
MSG           msg;

InitLibUtil();
InitLibWinutil(hInstance);

SetRandom(GetTickCount());

mySetDefaultWindowClass(&wc,hInstance);
wc.lpszClassName  = "JCD_billard";
mySetRectWH(&rc,0,0,SIZE_X_WINDOW,SIZE_Y_WINDOW);

myWindow = myCreateWindow(&wc,
                            "Billard",
                          WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN,
                          &rc,
                          TRUE,
                          TRUE,
                            NULL,
                          NULL,
                            sizeof(DATA_WINDOW),
                          NULL,
                            WndProc
                          );
data = (P_DATA_WINDOW)myWindow->userData;
hwnd = data->hwnd;
hdlg = data->hdlg;

ShowWindow(hwnd,iCmdShow);
UpdateWindow(hwnd);
while(TRUE)
    {
  if(PeekMessage (&msg, NULL, 0, 0, PM_REMOVE)) // si on a un message
    {
    if(!IsDialogMessage(hdlg,&msg))
      {
      if(msg.message == WM_QUIT) break;
      TranslateMessage(&msg);
      DispatchMessage(&msg);
      }
    }
  else
    {
    SendMessage(hwnd,WM_FREETIME,0,0);
    }
    }

CloseLibUtil();
CloseLibWinutil();
return 0 ;
} // WinMain()

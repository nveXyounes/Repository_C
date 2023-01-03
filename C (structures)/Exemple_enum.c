#include<stdio.h>
 
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

enum year{Jan, Feb, Mar, Apr, May, Jun, Jul,Aug, Sep, Oct, Nov, Dec};

enum State {Working = 1, Failed = 0, Freezed = 0};

int main()
{
    enum week day;
    day = Wed;
    printf("%d",day);
    printf("\n");

    

    int i;
   for (i=Jan; i<=Dec; i++){   
      printf("%d ", i);
   }
    printf("\n");



printf("%d, %d, %d", Working, Failed, Freezed);
    printf("\n");

      

    return 0;
}
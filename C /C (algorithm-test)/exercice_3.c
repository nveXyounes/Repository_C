// just algorithm //

typedef struct {
  int tokenId;
  char * lastOwner;
  char * dataLink;
  float price;
} NFT;

int Count_NFT(NFT **T,int n){
    int c=0,i;
    printf("saisie le nombre de NFTs : ");
    scanf("%d",&n);
     T=malloc(n*sizeof(NFT));
     for(i=0;i<n:i++){
      printf("saisie le TokenID : ");
      scanf("%d",(*T+i).tokenId);
      (*T+i)->lastowner=malloc(10);
      printf("saisie le nom : ");
      scanf("%s",(*T+i)->lastowner);
      (*T+i)->dataLink=malloc(10);
      printf("saisie le datalink : ");
      scanf("%s",(*T+i)->datalink);
      printf("saisie le price : ");
      scanf("%f",(*T+i).price);
      c++;
    }
    return c;
}

void change_owner_NFT(NFT **T,int n){
      int temp_token;
      char tmp_nom[20];
      printf("saisie le tokenId pour la recherche : ");
      scanf("%d",&temp_token);
        for(i=0;i<n;i++){
            if(temp_token==(*T+i).tokenId)
            printf("saisie une nouvelle nom : ");
            scanf("%c",&tmp_nom);
            strcpy((*T+i)->lastowner,tmp_nom);
            break;
        }
}
void update_price(NFT **T,int n){
    float perc_increase,m=0;
    int i;
    printf("saisie le pourcentage : ");
    scanf("%f",&perc_increase);
    for(i=0;i<n;i++){
        m=((*T+i)->price*perc_increase)/100;
        (*T+i)->price=(*T+i)->price-m;
        m=0;
    }
}

void sort_NFT(NFT **T,int n)
{
     int temp,i,j;
     char tmp[20];
 
     for (i=0;i<n;i++)
     {
        for(j=i;j<n;j++)
        {
            if(T[j]->price>T[i]->price)  /* si on inverse le signe d'inégalité
                                          on aura le trie croissant */
            {
                temp=(*T+i)->price;
                (*T+i)->price=(*T+j)->price;
                (*T+j)->price=temp;
                
                temp=(*T+i)->tokenId;
                (*T+i)->tokenId=(*T+j)->tokenId;
                (*T+j)->tokenId=temp;

                strcpy((*T+i)->lastOwner,tmp);
                strcpy((*T+i)->lastOwner,(*T+j)->lastOwner);
                strcpy((*T+j)->lastOwner,tmp);

                strcpy((*T+i)->dataLink,tmp);
                strcpy((*T+i)->dataLink,(*T+j)->dataLink);
                strcpy((*T+j)->dataLink,tmp);
            }
        }
 
     }
}
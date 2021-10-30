#include<stdio.h>
#include<conio.h>
void main()
{
   int dosai=50,idly=50,tea=25,vadai=30;
   int adosai,aidly,atea,avadai;
   int bdosai,bidly,btea,bvadai;
   //scanf("%d%d%d%d",&dosai,&idly,&tea,&vadai);
   printf("enter the devi\n:",adosai);
   scanf("%d",&adosai);
   printf("enter the bee\n:",aidly);
   scanf("%d",&aidly);
   printf("enter the sasi\n:",atea);
   scanf("%d",&atea);
   printf("enter the saran\n:",avadai);
   scanf("%d",&avadai);
   bdosai=dosai-adosai;
   bidly=idly-aidly;
   btea=tea-atea;
   bvadai=vadai-avadai;
   printf("balance dosai:\n%d",bdosai);
   printf("balance idly:\n%d",bidly);
   printf("balance tea :\n%d",btea);
   printf("balance vadai:\n%d",bvadai);
   getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
   int dosai=50,idly=50,tea=25,vadai=30;
   int adosai,aidly,atea,avadai;
   int bdosai,bidly,btea,bvadai;
   //scanf("%d%d%d%d",&dosai,&idly,&tea,&vadai);
   printf("person 1");
   printf("enter the person1 dosai:\n",adosai);
   scanf("%d",&adosai);
   printf("enter the person1 idly:\n",aidly);
   scanf("%d",&aidly);
   printf("enter the person1 tea:\n",atea);
   scanf("%d",&atea);
   printf("enter the person1 vadai:\n",avadai);
   scanf("%d",&avadai);

   printf("person2");
   printf("enter the person2 dosai:\n",adosai);
   scanf("%d",&adosai);
   printf("enter the person2 idly:\n",aidly);
   scanf("%d",&aidly);
   printf("enter the person2 tea:\n",atea);
   scanf("%d",&atea);
   printf("enter the person2 vadai:\n",avadai);
   scanf("%d",&avadai);
   bdosai=dosai-adosai;
   bidly=idly-aidly;
   btea=tea-atea;
   bvadai=vadai-avadai;
   printf("balance dosai:%d\n",bdosai);
   printf("balance idly:%d\n",bidly);
   printf("balance tea :%d\n",btea);
   printf("balance vadai:%d\n",bvadai);
   printf("balance\ndosai\t%didly\t%dtea\t%dvadai\t%d",adosai,aidly,atea,avadai);
   getch();
}
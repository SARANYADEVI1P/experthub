#include<stdio.h>
#include<conio.h>
void main()
{
   int poori;
   int apoori,bpoori,cpoori;
   int eata,eatb,eatc,eatd,eate;
   clrscr();
   printf("enter the no of poori\n");
   scanf("%d",&poori);
   printf("enter the apoori\n");
   scanf("%d",&apoori);
   printf("enter the bpoori\n");
   scanf("%d",&bpoori);
   eata=poori*apoori/100;
   printf("eata%d\n",eata);
   eatb=poori*bpoori/100;
   printf("eatb%d\n",eatb);
   eatd=poori-eata-eatb;
   printf("eatd%d\n",eatd);
   printf("enter the cpoori\n");
   scanf("%d",&cpoori);
   eatc=poori*cpoori/100;
   printf("eatc%d\n",eatc);
   poori=eatd-eatc;
   printf("poori%d\n",poori);
   getch();
}


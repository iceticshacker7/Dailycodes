#include<stdio.h>
int main()
         {
             int a,b,e,d;
             printf("please enter the amount of money each of u have:\n ");
             scanf("%d%d%d%d",&a,&b,&e,&d);
             

             if(a+b+e+d>=3000)
             printf("required amount is available");
             
             else{
                 printf("required amount not available");
             }
             char c,b2;
             fflush(stdin);
             
             printf("please enter if u have 1 car available(y/n):\n ");
             scanf("%c",&c);
             if(c=='y')
             printf("yes u can ride to multiplex");
             
             else {
             printf("please enter if u have 2 bike available(y/n):\n ");
             fflush(stdin);
             scanf("%c",&b2);
             
             if(b2=='y')
             printf("yes u can ride to multiplex");
             
             else {
                 printf("no u cannot ride to multiplex");}
             }
             if(a+b+e+d>=3000 && (c=='y' || b2=='y'))printf("\n yes,u can go to movie");


             return 0;

         }
#include<stdio.h>

int main()
         {
            int cash,b,r;
            printf("please enter the amount of cash u have");
            scanf("%d",&cash);
            b=cash;
            int n2000=cash/2000;
            cash=cash-n2000*2000;

            int n500=cash/500;
              cash=cash-n500*500;

            int n200=cash/200;
              cash=cash-n200*200;

            int n100=cash/100;
              cash=cash-n100*100;

            int n50=cash/50;
              cash=cash-n50*50;

            int n20=cash/20;
              cash=cash-n20*20;

            int n10=cash/10;
              cash=cash-n10*10;
              
            printf("%d  notes of 2000 required\n",n2000);
            printf("%d  notes of 500 required\n",n500);
            printf("%d  notes of 200 required\n",n200);
            printf("%d  notes of 100 required\n",n100);
            printf("%d  notes of 50 required\n",n50);
            printf("%d  notes of 20 required\n",n20);
            printf("%d  notes of 10 required\n",n10);
            int total=n2000+n500+n200+n100+n50+n20+n10;
            printf("\n\ntotal no. of notes = %d",total);
             return 0;

         }
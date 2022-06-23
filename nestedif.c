#include<stdio.h>
int main()
         {
             int a;
             printf("please enter u r percentage\n\n");
             scanf("%d",&a);
             if(a>60)
             {
                    printf("PASS");
                 if(a>75)
             printf("\npassed in honors");
             }
             if(a<=60)
             {
                    printf("FAIL");
                 }
             return 0;

         }
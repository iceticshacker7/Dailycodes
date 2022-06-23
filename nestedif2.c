#include<stdio.h>
int main()
         {
             int a;
             printf("please enter 3 no.s\n\n");
             scanf("%d%d%d",&a,&b,&c);
             if(a>b)
             {
                 if(a>c)printf("%d is the largest",a);
                else{
                    printf("%d is the largest",c);
                
                }
             }else{
                 if(b>c)
                 printf("%d is the largest",b);
                
             }
             
             return 0;

         }
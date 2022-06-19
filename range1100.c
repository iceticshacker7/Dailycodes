#include<stdio.h>
int main()
         {
             int a,b,c;
             printf("enter any value");
             scanf("%d",&a);
             if(1>=a && a<=100 && a%2==0)
             printf("%d\nlies btw 1 to 100 and is even",a);
             if(1>=a && a<=100 && a%2==1)
             printf("%d\nlies btw 1 to 100 and is odd",a);
             if((1<a || a>100) && (a%2==0))
             printf("%d\n does not lies btw 1 to 100 and is even",a);
             if((1<a || a>100) && (a%2==1))
             printf("%d\ndoes not lies btw 1 to 100 and is odd",a);
             return 0;

         }
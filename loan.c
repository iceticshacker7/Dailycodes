#include<stdio.h>
int main()
         {
             unsigned int a;
             long b;
             printf("please enter u r age and salary\n");
             scanf("%d" "%d",&a,&b);
            
             if((a>=20&& a<=30) && ((b>=10000 && b<=20000)||b>40000)  )
             printf("eligible");
            
             if((a>30&& a<=40 )&& ((b>20000 && b<=30000)||b>40000) )
             printf("eligible");
            
             if((a>40 && a<=50) && ((b>30000 && b<=40000)||b>40000) )
             printf("eligible");
            
             if((a>50 && a<=60) && b>40000 )
             printf("eligible");
            
            if(a<20)
             printf("not eligible");
             
             return 0;

         }
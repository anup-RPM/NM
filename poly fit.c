// polynomial eqn fit 
#include<stdio.h>
#include<math.h>
main()
{ 
float x,sum=0;
int order,i;
printf("Value of x\n");
scanf("%f",&x);
printf("Enter order of polynomial\n");
scanf("%d",&order);
float coefficient[order];


for(i=0;i<=order;i++)
{
 printf("Enter coefficients of polynomial at x^%d\n",i);
  scanf("%f",&coefficient[i]); 
}
  for(i=0;i<=order;i++)
  {
   sum+=coefficient[i]*pow(x,i);
  }
  
  for(i=order;i>=0;i--)
  {
   if(i>0)
   printf("%.2fx^%d+",coefficient[i],i);
   else
   printf("%.2fx^%d=",coefficient[i],i);
  }
  printf("%.2f\n",sum);
}
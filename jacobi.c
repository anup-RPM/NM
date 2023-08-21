// jacobi method 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define EPS 0.0001
#define MAX 10

int main()
{
	 
	 int i,j,n,key,count=0;
     float a[MAX][MAX],b[max],x[MAX],xold[MAX],sum;
	 /* Inputs */
	 printf("\nInput the number of variables: ");
	 scanf("%d", &n);
	 printf("\n Input coefficient a(i,j) row-wise(one row on each line):");
	 
	 /* Reading Matrix */
	 for(i=1;i<=n;i++)
	 
		  for(j=1;j<=n;j++)
		  scanf("%f",&a[i][j]);
          printf("\n Enter vector b:");
	 for(i=1;i<=n;i++)
		  scanf("%f",&b[i]);
	        for(i=1;i<=n;i++)
                xold[i]=0;
                do{
                    key=0;
	 for(i=1;i<=n;i++){
        sum=b[i];
		  for(j=1;j<=n;j++){
            if(j!=1) sum=sum-(a[i][j]*xold[j])
          }
        x[i]=sum/a[i][i];
        printf("%f\t",x[i]);
        if((key==0)&&(fabs((x[i]-xold[i])/x[i])>EPS))
        key=1;
     }
     printf("\n");
	 for(i=1;i<=n;i++)
     xold[i]=x[i];
        count++;

}
while(key==1);
printf("\n Solution vector x:\n");
	 for(i=1;i<=n;i++)
        printf("\t%f",x[i]);
        printf("\nNumber of iterations: %d",count);
        return(0);
}



            
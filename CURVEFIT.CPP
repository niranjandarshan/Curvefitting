#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

    int n,i;
    float x[],y[];
    float sumx=0,sumy=0,sumxy=0,sumx2=0;
    float a,b;
    printf("\n program for Linear Curve Fitting \n ");
    printf("\n Enter the value of number of terms n:");
    scanf("%d",&n);
    printf("\n Enter the values of x:");
    for(i=0;i<=n-1;i++)
    {
	scanf(" %f",&x[i]);

    }
    printf("\n Enter the values of y:");
    for(i=0;i<=n-1;i++)
    {
	scanf("%f",&y[i]);
    }
    for(i=0;i<=n-1;i++)
    {
	sumx=sumx +x[i];
	sumx2=sumx2 +x[i]*x[i];
	sumy=sumy +y[i];
	sumxy=sumxy +x[i]*y[i];

    }

    a=(sumy*sumx-n*sumxy)/(sumx*sumx-n*sumx2);
    b=(sumy-a*sumx)/n;
    printf("\n\nThe line is Y=(%f) +(%f) (X)",a,b);

}
#include<stdio.h>
#include<math.h>
main()
{
	double x,y;
	scanf("%lf",&x);
	if(-1<x&&x<=1) y=9*x*x-sin(exp(x+2));else
	  if(x<-1) y=sqrt(fabs(x+log(cos(x)+5)));else y=log10(1+pow(3.5,x));
	printf("%.3lf",y);
	
	
 } 

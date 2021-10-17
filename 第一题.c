#include<stdio.h>
#include<math.h>
main()
{	double x,y;
	scanf("%lf",&x);
	if(0<x&&x<=1) y=y=2*x*x*x-sin(x+3);else 
	  if(1<x&&x<10) y=pow(3.5,x);else y=sqrt(fabs(5+x));
	printf("%.3lf",y);
}

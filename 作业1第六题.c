#include<stdio.h>
#define PI 3.14159
main()
{
	double r,h,v,m;
	scanf("%lf %lf",&r,&h);
	v=0.3333333333333333*PI*r*r*h;
	m=v*7800;
	printf("%.6lf %.4f",v,m);
}

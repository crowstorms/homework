#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,k;
	float n2;
	scanf("%d",&n);
	k=1;
	n2=sqrt(n);
	for(i=2;i<=n2;i++)
		if(n%i==0) k=0;
	if(k==1) printf("Yes");else printf("No");
	
}

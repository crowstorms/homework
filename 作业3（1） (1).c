#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n;
	scanf("%d",&n); 
	for(i=0;i<n;i++)
	{	for(j=0;j<n-1-i;j++) printf(" ");
		for(j=0;j<=i;j++) printf("%c",j+'A');
 		for(j=i-1;j>=0;j--) printf("%c",j+'A');

		printf("\n");
	}	
}

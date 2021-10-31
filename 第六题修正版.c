#include<stdio.h>
#include<math.h>
main()
{ int a[100],n,i,d,j;
  scanf("%d %d",&n,&d);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
    {if (a[i]!=d)
      printf("%d ",a[i]);
    }
}


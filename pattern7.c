#include<stdio.h>
int main()
{int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=0;j<n-i-1;j++)
  {printf(" ");
  }
  for(j=0;j<=i;j++)
  { printf("* ");
  }
  printf("\n");
 }
 for(i=1;i<n;i++)
 {for(j=0;j<i;j++)
  {printf(" ");
  }
  for(j=i;j<=n-1;j++)
  { printf("* ");
  }
  printf("\n");
 }
return 0;
}
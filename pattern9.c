#include<stdio.h>
int main()
{int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=0;j<n-i-1;j++)
  {printf(" ");
  }
  int k=i+1;
       for(j=0; j<=i; j++){
        printf("%d",k--);
  }
  printf("\n");
 }
return 0;
}
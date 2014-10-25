#include <stdio.h>
/*Arbitrary-precision arithmetic*/
int main()
{
  int a[100][50],sum[50],i,j;
  int sum0=0;
  for(i=0; i<100; i++)
    {
      for(j=0; j<50; j++)
        {
          scanf("%1d",&a[i][j]);
        }
    }
  for(j=49; j>=0; j--)
    {
      for(i=0; i<100; i++)
        sum0 += a[i][j];
      sum[j] = sum0%10;
      sum0 /= 10;
    }
  printf("sum = %d",sum0);
  for(j=0; j<49; j++)
    printf("%d",sum[j]);
  printf("\n");
  return 0;
}

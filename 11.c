#include <stdio.h>
int main()
{
  int i,j;
  long int product;
  long int max_pro=1;
  int a[20][20];
  for(i=0; i<20; i++){
    for(j=0; j<20; j++)
      scanf("%d",&a[i][j]);
        }
  for(i=0; i<17; i++){
    for(j=0; j<17; j++){
      product=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
      if (product>max_pro)
        max_pro = product;
    }
  }
  for(i=3; i<20; i++){
    for(j=3; j<20; j++){
      product=a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3];
      if (product>max_pro)
        max_pro = product;
    }
  }
  for(i=0; i<17; i++){
    for(j=0; j<20; j++){
      product=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
      if (product>max_pro)
        max_pro = product;
    }
  }
  for(i=0; i<20; i++){
    for(j=0; j<17; j++){
      product=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
      if (product>max_pro)
        max_pro = product;
    }
  }
  printf("max_product=%ld\n",max_pro);
  return 0;
}

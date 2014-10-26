#include <stdio.h>

int letters(int n)
{
  int letters_num,i,j,k;
  int c[30]={0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8,6,6,5,5,5,7,6,6,7,8};
  /*c means Cardinal number*/
  i=n/100, j=n%100/10, k=n%10;
  
  if(n==1000)
    letters_num = c[1]+c[29];
  else if(j==1)
    letters_num = c[i]+(i||0)*c[28]+(i&&(j||k))*3+c[n%100];
  else
    letters_num = c[i]+(i||0)*c[28]+(i&&(j||k))*3+(j||0)*c[20+j-2]+c[k];
  
  return letters_num;
}

int main()
{
  long int sum_num=0;
  int i;
  
  for(i=1; i<=1000; i++)
    {
      // printf("letters(%d) = %d\n",i,letters(i));
      sum_num += letters(i);
    }
  
  printf("how many letters would be used from 1 to 1000? %ld\n",sum_num);
  return 0;
}

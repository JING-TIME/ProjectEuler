#include <stdio.h>
int divisor(int n)
{
  int divisor_number=1,i,j;
    {
      for(i=2; i<=n; i++)
        {
          j = 0;
          while(n%i==0)
            {
              n/=i;
              j++;
            }
          divisor_number*=(j+1);
        }
    }
    return divisor_number;
}

int main()
{
  long int i,n=1;
  for(i=2; divisor(n)<=501; i++)
    n += i;
  printf("the first triangle number to have 501 divisor: %ld\n",n);
  return 0;
}

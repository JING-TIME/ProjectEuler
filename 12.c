#include <stdio.h>
int divisor(int n)
{
  int divisor_number=1,i;
  for(i=1; i<=n/i; i++)
    {
      if(n%i==0)
        divisor_number+=2;
    }
  if(i*i==n)
  divisor_number-=1;
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

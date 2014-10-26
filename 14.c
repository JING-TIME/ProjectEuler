#include <stdio.h>
long Collatz(long int n)
{
  long int length = 1;
  while(n!=1)
    {
      if(n%2==0)
        n/=2;
      else
        n=3*n+1;
      length++;
    }
  return length;
}

int main()
{
  long int longest=1,start_number=1,i;
  for(i=1; i<=1000000; i++)
    {
      if (Collatz(i)>longest)
        {
          longest = Collatz(i);
          start_number = i;
        }
    }
  printf("the longest chain started number: %ld\n",start_number);
  return 0;
}

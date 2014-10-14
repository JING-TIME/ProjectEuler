#include<stdio.h>

int is_prime(int num)
  {
    long i;
    if (num==1) return 0;
    if (num==2) return 1;
    for (i=2; i<= num/2; i++)
      {
        if (num%i == 0)
          return 0;
      }
    return 1;
  }

int main()
{
  int j=0, k=1;  /*这里表示第1个质数是2*/
  while (k<=10001)
    {
      j++;
      if (is_prime(j)==1)
        {
          k++;
        }
    }
  printf("10001th prime number is %d\n",j);
  return 0;
}

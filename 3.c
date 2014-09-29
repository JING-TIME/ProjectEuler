
#include <stdio.h>

int main()
{
  long i,num=600851475143;
  for (i=2; i<num/2; i++)
  {
      while(num % i == 0) 
          num /= i;
  }
  printf("%d\n", num);
}

/*这是参考zguangyu0000写的，而且最初在 for 和 while 的用法上面弄错了。注意for后面括号里是分号*/

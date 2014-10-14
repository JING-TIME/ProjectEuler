#include<stdio.h>
main()
{
  int sum1=0,sum2=0,max_num,i;
  //记得初始化变量，否则会出现不可预知的错误
  printf("Please input the max num:");
  scanf("%d",&max_num);
  for (i=1; i<=max_num; i++)
    {
      sum1 += i*i;
      sum2 += i;
    }
  printf("%d\n",sum2*sum2 - sum1);
}

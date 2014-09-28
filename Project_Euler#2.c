//  my code 

#include <stdio.h>

int main() 
{
    int sum = 2;
    int a = 1, b = 1, c = a + b;
    while (c < 4000000)
    {
        a = b, b = c, c = a + b;
        if (c % 2 == 0)
            sum += c;
    }
    printf("sum = %d",sum);
    return 0;
}
 

// cuihaoleo's code

#include <stdio.h>
 
int main ()
{
    int a = 0, b = 1, c = 1, sum = 0;
 
    while (c < 4000000)
    {
        if (c % 2 == 0)
            sum += c;
 
        c = a + b;
        a = b;
        b = c;
    }
 
    printf("%d\n", sum);
 
    return 0;
}

// 明显cuihao的代码格式美观...

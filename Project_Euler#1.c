#include <stdio.h>
 
int main() {
    int sum = 0, num;
   
    for (num = 0; num < 1000; num ++){
        if (num % 3 == 0 || num % 5 == 0){
            sum += num;
        }
    }
    printf("sum = %d",sum);
    return 0;
}

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// 题目：请编写一个函数void fun(int m.int k,intx[D)
// ，该函数的功能是:将大于整数m且紧靠m的k个素数存入所指的数组中。

int main(void)
{
    int m = 17;
    int k = 5;
    int counter = 0;
    int x = 0;
    //  scanf("%d %d", &m, &k);
    int i = 0;
    int is_prime = 1;
    // 以下为优化后的找素数方法
    for (counter = 0, x = m + 1; counter < k; x++)
    {
        for (i = 2, is_prime = 1; i < sqrt((double) x); i += 2)
        {  // 减少了i的循环次数，当循环到根号x时即可，使用标志位置1判断是素数
            // 优化：素数的因子一定不会是偶数，故i可以走两步步长
            if (x % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            counter++;
            printf("%d\n", x);
        }
    }
    printf("Found %d primes", counter);
    return 0;
}  // 下面是原码
/*for (counter = 0, x = m + 1; counter < k; x++)
    {
        for (i = 2; i < x; i+=2)
        {
            if (x % i == 0)
            {
                break;
            }
        }
        if (x == i)
        {
            printf("%d\n", i);
            counter++;
        }
    }
    printf("Found %d prime numbers\n", counter);*/
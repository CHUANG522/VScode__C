#include <stdio.h>
#include <stdlib.h>
// 题目：请编写函数它的功能是。求出能整除x且不是偶数的各整数，并按从小到大的顺序放在pp所指的数组中，
// 这些除数的个数通过形参n返回。例如，若x中的值为30，则有4个数符合要求，它们是1、3、5、15。

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fun(int x);
int main(void)
{
    int x = 12345;
    printf("There are %d numbers that meet the requirements", fun(x));
    return 0;
}
int fun(int x)
{
    int pp[x / 2];
    int j = 0;
    for (int i = 1; i <= x; i += 2)
    {  // for循环更标准的写法，将变量放在for出声明
        if (x % i == 0)
        {
            pp[j] =
                i;  // pp是变长数组一定要看清pp的自增变量是谁，不要循环是i自增，数组下标也是i自增了
            printf("%d \n", pp[j]);
            j++;  // 注意不要写成pp[j++]
        }  // printf("%d",pp[j++])
        // 这样一次循环会执行两次j++操作
    }
    return j;  // 不要忘记有返回值的函数要return
}
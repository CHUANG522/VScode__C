#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// 题目编写函数fun，其功能是:根据以下公式求P的值，结果由函数值带回。m与n为两个正整数且要求m>n
// p=m!/(n!(m-n)!)

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double fun(unsigned int m, unsigned int n);
int main(void)
{
    int m = 12;
    int n = 3;
    printf("P is %f", fun(m, n));
    return 0;
}
double fun(unsigned int m, unsigned int n)
{
    double p = 1;
    if (m <= n)
    {
        printf("输入错误,要求m>n");
        return -1;
    }
    // 组合数的计算优化：

    // 这样能够有效防止阶乘过大，越int的界 }
    for (int i = 1; i <= m - n; i++)
    {
        p = p * (i + n) / i;
    }

    return p;
}
/*
 for (int i = 1; i <= m; i++)
     {
         sum_m *= i;
     }
     for (int i = 1; i <= n; i++)
     {
         sum_n *= i;
     }
     for (int i = 1; i <= m - n; i++)
     {
         sum_m_n *= i;
     }*/
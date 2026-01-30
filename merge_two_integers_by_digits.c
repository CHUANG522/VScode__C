#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 题目：函数fm的功能是:将a、6中的两个正整数合并形成一个新的整数放在c中。
//  合并的方式是:将a中的十位和个位数依次放在变量c的十位和千位上，
//  b中的十位和个位数依次放在变量c的个位和百位上。
int main(void)
{
    int a = 2345;
    int b = 345612;
    int a_10 = a % 100 / 10;
    int a_1 = a % 10;
    int b_10 = b % 100 / 10;
    int b_1 = b % 10;
    int c = a_10 * 10 + a_1 * 1000 + b_10 + b_1 * 100;
    printf("%d", c);
    return 0;
}

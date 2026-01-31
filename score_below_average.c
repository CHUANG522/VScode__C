#include <stdio.h>
#include <stdlib.h>
// 题目：m个人的成绩存放在score数组中，请编写函数fmn，它的功能是。
// 将低于平均分的人数作为函数值返回，将低于平均分的分数放在below所指的数组中

#define ARR_LEN(arr) (sizeof(arr) / sizeof(arr[0]))
// 参数宏定义，宏定义的名字一般全大写与变量名区分，被宏的部分一定加括号括起来
// 防止纯文本替换时运算优先级出问题，所有的参数也用括号括起来
// 参数宏的变量类似于函数调用只是不用参数类型
int fun(int N, int* score);
int main(void)
{
    int score[] = {23, 45, 66, 78, 34, 78, 99};
    int score_len = ARR_LEN(score);  // 参数宏的调用
    printf("%d", fun(score_len, score));
    return 0;
}

int fun(int N, int* score)
{
    // int score_len = sizeof(score) / sizeof(score[0]);
    // 函数内这样计算数组长度是错误的，当用数组作为参数时，
    // 数组名在函数中会退化为指向首元素的指针，即score是指向score【0】的指针
    // 即sizeof(score)=8;
    //
    int i = 0;
    double sum = 0;
    //   int counter = 0;
    double average = 0;
    int persons = 0;
    int below[N / 2 + 1];
    for (i = 0; i < N; i++)
    {
        sum += score[i];
    }
    average = sum / N;
    printf("Average is %f\n", average);
    for (i = 0; i < N; i++)
    {
        if (score[i] < average)
        {
            //  below[i] = score[i];
            // 错误：  新数组below越界，前面已经说below的大小是score的一半加一
            // 如果用i来赋值below那么说明below和score一样大，故循环变量错误
            // 即两个数组都用同一个自增变量，例如a[i]=b[i]前提保证ab数组大小一样，或a>b数组
            below[persons] = score[i];

            printf("below[%d] is %d\n", persons, below[persons]);
            persons++;
        }
        // return persons;  ！！！return要放在函数的最后啊！！！
    }
    return persons;
}
// 优化：上述below数组是使用变长数组的方法，下面使用内存分配的方法
/*  int *below =NULL ;
int below_len=10;
below =(int *)malloc(below_len *sizeof(int));

if(below == NULL){
perror("申请失败原因：");
  return 1;  //强制停止程序
}

free(below);
below=NULL;
*/
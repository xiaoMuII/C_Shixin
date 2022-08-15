#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef rand_h
#define rand_h
//生成随机数数组


int *getRandom1()
{
    static int r[10];
    int i;

    //设置时间种子
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++)
    {
        //生成随机数
        r[i]=rand();
        printf("r[%d] = %d\n",i,r[i]);
    }

    return r;
}



#endif
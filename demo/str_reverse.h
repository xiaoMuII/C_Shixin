#include <string.h>

#ifndef str_reverse_h
#define str_reverse_h

char *reverse(char *p)
{
    int len = strlen(p);
    //定义一个新的字符串
    char *dest = NULL;
    //设置字符串的长度为对应长度
    dest = (char*)malloc(len+1);
    *dest = &p[len-1];
    while(len--!=0)
    {
        *dest++ = *p--;
    }
    *dest = 0;

    printf("输出字符串：%s\n",dest);

    return dest;
}

#endif
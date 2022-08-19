#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *a ="AAA";
    
    printf("%s\n",a);
    //a[0] = 'B';
    printf("2:%s\n",a);

    system("pause");    // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}
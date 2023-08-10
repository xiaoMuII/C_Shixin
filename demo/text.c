#include <stdio.h>
#include <stdlib.h>
#include "strlen.h"
#include <string.h>



int main()
{
    char *p = "shixin";
    //printf("len = %d\n",strlen(p));
    int i =strlen1(p);
    printf("\nlen = %d\n",i);
    printf("\nlen1 = %d\n",strlen(p));

    system("pause");
    return 0;
}
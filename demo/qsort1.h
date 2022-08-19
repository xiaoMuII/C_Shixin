#include <stdlib.h>
#include <stdio.h>

#ifndef qsort1_h
#define qsort1_h

int cmp(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}

int qsort1(int *a,int numsize)
{
    //int *z =(int*)malloc(numsize*sizeof(int));
    qsort(a,numsize,sizeof(int),cmp);

    return 0;
}

#endif
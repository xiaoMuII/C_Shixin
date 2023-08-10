/*  冒泡排序  */
#ifndef _BLUBLE_H
#define _BLUBLE_H


void bluble(int *arr,int len)
{
    int i,j,temp;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



#endif

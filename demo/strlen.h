#ifndef strtlen_h
#define strtlen_h
//字符串形式
//char site[10] ="shixin";
//char site[10] ={'s','h','i','x','i','n','\0'};

// 自行判断字符串长度，关键：以‘\0’结尾 
int strlen1(char *p)
{
    int i=0;
    //*(p+i) *p为第一位，依次加下去
    for(i=0;*(p+i)!='\0';i++)
    {
        ;
    }
    return  i;
}

#endif
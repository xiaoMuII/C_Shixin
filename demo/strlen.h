#ifndef _STRLEN_H
#define _STRLEN_H

int strlen1(char *p)
{
    int i=0;
    while(*p != 0)
    {
        p++;
        i++;
    }
    return i;
}

#endif

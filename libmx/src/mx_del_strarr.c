#include "libmx.h"

void mx_del_strarr(char ***arr)
{
    if (arr != NULL)
    {
        char **p = *arr;
        while (*p)
        {
            mx_strdel(p);
            p++;
        }
        free(*arr);
        *arr = NULL;
    }
}

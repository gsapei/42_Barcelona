//HEADER

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int     n;
    int     i;
    char    *result;
    char    *t_result;

    i = 0;
    n = ft_strlen((char *)s);
    result = malloc ((n+1) * sizeof(char));
    t_result = result;
    while (*s)
    {
        *t_result = (*f)(i,*s);
        i++;
        t_result++;
        s++;
    }
    return (result);
}


static char to_upper_function(unsigned int i, char c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
}

int main()
{
    char    str[50] = "esta cadena va a ser transformada";
    printf("%s\n",ft_strmapi(str,to_upper_function));
}
// HEADER!!

#include "libft.h"
#include <unistd.h>

void    ft_putstr_fd(char *s, int fd)
{
    while (*s)
        write(fd, s++, 1);
}

int main()
{
    char str[30] = "Esta es una cadena de prueba";
    char *pointer;

    pointer = str;
    ft_putstr_fd(pointer,1);
}

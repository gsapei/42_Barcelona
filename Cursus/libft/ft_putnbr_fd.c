// HEADER !!

#include "libft.h"
#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
    long    nb;

    nb = (long)n;
	if (nb < 0) {
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10) {
		ft_putnbr_fd(nb / 10, fd);
		nb = nb % 10;
	}
	if (nb < 10) ft_putchar_fd(nb + 48, fd);
}

// int main()
// {
//     ft_putnbr_fd(-2147483648,1);
//     ft_putchar_fd('\n',1);
//     ft_putnbr_fd(0,1);
//     ft_putchar_fd('\n',1);
//     ft_putnbr_fd(2147483647,1);
//     ft_putchar_fd('\n',1);
// }
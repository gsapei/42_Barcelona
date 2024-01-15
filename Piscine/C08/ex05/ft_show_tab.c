/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:52:10 by gsapei            #+#    #+#             */
/*   Updated: 2023/11/09 16:05:14 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	long	x;
	char	temp;

	x = nb;
	if (x < 0)
	{
		write(1, "-", 1);
		x *= -1;
	}
	if (x >= 0 && x < 10)
	{
		temp = x + '0';
		write(1, &temp, 1);
	}
	else
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	ft_putstr((*par).str);
	write(1, "\n", 1);
	ft_putnbr((*par).size);
	write(1, "\n", 1);
	ft_putstr((*par).copy);
	write(1, "\n", 1);
}

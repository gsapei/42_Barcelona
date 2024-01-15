/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:32:10 by gsapei            #+#    #+#             */
/*   Updated: 2023/10/31 15:44:00 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

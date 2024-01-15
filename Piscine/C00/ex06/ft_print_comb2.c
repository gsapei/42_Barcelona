/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:24:50 by gsapei            #+#    #+#             */
/*   Updated: 2023/10/23 17:13:11 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digits(char b1, char b2)
{
	char	d1;
	char	d2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			d1 = i + '0';
			d2 = j + '0';
			write(1, &b1, 1);
			write(1, &b2, 1);
			write(1, " ", 1);
			write(1, &d1, 1);
			write(1, &d2, 1);
			write(1, ", ", 2);
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_print_comb2(void)
{
	char	d1;
	char	d2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			d1 = i + '0';
			d2 = j + '0';
			ft_print_digits(d1, d2);
			j++;
		}
		j = 0;
		i++;
	}
	write(1, "\b\b", 2);
}

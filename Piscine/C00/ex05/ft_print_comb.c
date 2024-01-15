/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:56:07 by gsapei            #+#    #+#             */
/*   Updated: 2023/10/23 15:42:38 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_values(char a, char b, char c)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				if (a != b && a != c && b != c && c > b && b > a)
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, &c, 1);
					write(1, " ", 1);
				}
				c++;
			}
			c = '2';
			b++;
		}
		b = '0';
		a++;
	}
	write(1, "\b", 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	
	a = '0';
	b = '1';
	c = '2';
	print_values(a, b, c);
}

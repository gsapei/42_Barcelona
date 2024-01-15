/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:05:35 by gsapei            #+#    #+#             */
/*   Updated: 2023/10/26 17:01:18 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex_cast(char c)
{
	ft_putchar('\\');
	if (c < 10)
	{
		ft_putchar('0');
		ft_putchar(c + '0');
	}
	else
	{
		ft_putchar("0123456789abcdef"[c / 16]);
		ft_putchar("0123456789abcdef"[c % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			ft_hex_cast(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

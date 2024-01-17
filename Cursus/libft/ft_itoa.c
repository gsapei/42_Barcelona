/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:27:34 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/17 15:24:17 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

static int	ft_get_digits(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	t_n;
	int		digits;
	char	*result;
	char	*reverse;

	t_n = (long)n;
	digits = ft_get_digits(t_n);
	result = malloc ((digits) * sizeof(char));
	if (!result)
		return (NULL);
	reverse = result;
	if (t_n < 0)
	{
		*reverse-- = '-';
		t_n *= -1;
	}
	reverse += (digits);
	while (result < reverse)
	{
		*reverse-- = (t_n % 10) + '0';
		t_n /= 10;
	}
	if (n >= 0)
		reverse++;
	return (reverse);
}

// int main(void)
// {
// 	printf("%s\n",ft_itoa(2147483647));
// 	printf("%s\n",ft_itoa(0));
// 	printf("%s\n",ft_itoa(-2147483648));
// }

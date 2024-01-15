/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:14:51 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/11 16:34:51 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	resp;

	sign = 1;
	resp = 0;
	while (*str && (*str == 32 || *str == 9 || *str == 45
			|| *str == 43 || (*str > 48 && *str < 57)))
	{
		if (*str == 45 || *str == 43)
			if (*(str + 1) >= 48 && *(str + 1) <= 57)
				if (*str == 45)
					sign = -1;
		if (*str >= 48 && *str <= 57)
		{
			while (*str >= 48 && *str <= 57 && *str)
			{
				resp = resp * 10 + (*str - '0');
				str++;
			}
		}
		str++;
	}
	return (resp * sign);
}

// int	main(void)
// {
// 	char str1[100] = "  -35421as9f";

//     int result1;
// 	int result2;

// 	result1 = ft_atoi(str1);
// 	printf("[ft_atoi]: %d\n", result1);
// 	result2 = atoi(str1);
// 	printf("[   atoi]: %d\n", result2);

// 	return (0);
// }

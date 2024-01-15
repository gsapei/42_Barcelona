/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:20:41 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/10 16:57:48 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char dst = 'a';

// 	printf("ft_isprint result : %d\n ", ft_isprint(dst));
// 	printf("  isprint result : %d\n ", isprint(dst));
// 	return (0);
// }
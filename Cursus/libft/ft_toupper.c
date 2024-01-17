/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:00:39 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/17 15:25:49 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

// int	main(void)
// {
// 	char dst = 'v';

// 	printf("ft_toupper result : %c\n ", ft_toupper(dst));
// 	printf("  toupper result : %c\n ", toupper(dst));
// 	return (0);
// }
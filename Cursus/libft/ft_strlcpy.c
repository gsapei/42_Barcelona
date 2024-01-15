/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:03:16 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/10 15:49:21 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	char	*t_dst;
	char	*t_src;
	char	*resp;
	size_t	total;

	t_dst = dst;
	t_src = src;
	resp = src;
	total = 0;
	while (0 < dstsize - 1)
	{
		*t_dst++ = *t_src++;
		dstsize--;
	}
	*t_dst = '\0';
	while (*resp++)
		total++;
	return (total);
}

// int	main(void)
// {
// 	char dst[100] = "Learning_Is_Fun";
// 	char src[100] = "123456";

// 	printf("    Original string : %s\n ", dst);
// 	int i = ft_strlcpy(dst, src, 4);
// 	printf("ft_strlcpy string : %s [%d]\n ", dst, i);

// 	int j = strlcpy(dst, src, 4);
// 	printf("strlcpy string : %s [%d]\n ", dst, j);

// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:19:20 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/10 16:11:41 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	char	*t_dst;
	char	*t_src;
	char	*t_total;
	size_t	total;

	t_dst = dst;
	t_src = src;
	t_total = src;
	total = dstsize;
	while (*t_dst++)
		;
	t_dst--;
	while (0 < dstsize - 1)
	{
		*t_dst++ = *t_src++;
		dstsize--;
	}
	*t_dst = '\0';
	while (*t_total++)
		total++;
	return (total);
}

// int	main(void)
// {
// 	char dst[100] = "Learning_Is_Fun";
// 	char src[100] = "123456";

// 	printf("   Original string : %s\n ", dst);
// 	int i = ft_strlcat(dst, src, 12);
// 	printf("ft_strlcat string : %s [%d]\n ", dst, i);

// 	int j = strlcat(dst, src, 12);
// 	printf("   strlcat string : %s [%d]\n ", dst, j);

// 	return (0);
// }
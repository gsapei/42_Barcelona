/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:02:52 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/10 16:59:15 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*t_dst;
	unsigned char	*t_src;

	t_dst = (unsigned char *) dst;
	t_src = (unsigned char *) src;
	while (0 < n)
	{
		*t_dst = *t_src;
		t_dst++;
		t_src++;
		n--;
	}
	return (dst);
}

// int	main(void)
// {
// 	char dst[100] = "Learning_Is_Fun";
// 	char src[100] = "123456";

// 	char *first;
// 	char *second;

// 	first = dst;
// 	second = dst;
// 	printf("    Original string : %s\n ", dst);
// 	memcpy(first - 3, src, 6);
// 	printf("   memcpy overlap : %s\n ", dst);
// 	ft_memcpy(second - 3, src, 6);
// 	printf("ft_memcpy overlap : %s\n ", dst);
// 	return (0);
// }
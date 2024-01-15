/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:32:49 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/10 15:28:11 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*t_src;
	unsigned char	*t_dst;

	t_src = (unsigned char *) src;
	t_dst = (unsigned char *) dst;
	if (t_src >= t_dst)
	{
		while (n--)
			*t_dst++ = *t_src++;
	}
	else
	{
		t_dst += n - 1;
		t_src += n - 1;
		while (n--)
			*t_dst-- = *t_src--;
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
// 	memmove(first - 3, src, 6);
// 	printf("   memmove overlap : %s\n ", dst);
// 	ft_memmove(second - 3, src, 6);
// 	printf("ft_memmove overlap : %s\n ", dst);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:20:52 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/11 13:30:53 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (*temp++ && 0 < n--)
		if (*temp == (unsigned char)c)
			return (temp);
	return (NULL);
}

// int	main(void)
// {
// 	char dst[100] = "Learning_Is_Fun";
// 	char	*point1;
// 	char	*point2;

// 	printf(" Original string : %s\n", dst);
// 	point1 = ft_memchr(dst, '_', 30);
// 	printf("ft_memchr string : %s\n", point1);

// 	point2 = memchr(dst, '_', 30);
// 	printf("   memchr string : %s\n", point2);

// 	return (0);
// }
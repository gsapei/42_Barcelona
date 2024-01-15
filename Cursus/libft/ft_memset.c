/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:11 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/12 16:35:28 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*t;

	t = (unsigned char *) b;
	while (0 < len)
	{
		*t = (unsigned char)c;
		t++;
		len--;
	}
	return (b);
}

// int	main(void)
// {
// 	char dst[100] = "Learning_Is_Fun";
// 	char dst2[100] = "Learning_Is_Fun";

// 	printf("   Original string : %s\n ", dst);
// 	ft_memset(dst + 2, 3);
// 	printf("ft_memset string : %s\n ", dst);
// 	memset(dst2 + 2, 3);
// 	printf("   memset string : %s\n ", dst2);
// 	return (0);
// }
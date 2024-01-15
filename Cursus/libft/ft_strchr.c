/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:12:12 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/10 18:35:28 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*temp;

	temp = (char *)s;
	while (*temp++)
		if (*temp == c)
			return (temp);
	return (NULL);
}

// int	main(void)
// {
// 	char dst[100] = "Learning_Is_Fun";
// 	char	*point1;
// 	char	*point2;

// 	printf(" Original string : %s\n", dst);
// 	point1 = ft_strchr(dst, '_');
// 	printf("ft_strchr string : %s\n", point1);

// 	point2 = strchr(dst, '_');
// 	printf("   strchr string : %s\n", point2);

// 	return (0);
// }
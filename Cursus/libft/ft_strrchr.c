/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:21:19 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/10 18:38:14 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = (char *)s;
	while (*temp)
		temp++;
	temp--;
	while (*temp--)
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
// 	point1 = ft_strrchr(dst, 'i');
// 	printf("ft_strrchr string : %s\n", point1);
// 	point2 = strrchr(dst, 'i');
// 	printf("   strrchr string : %s\n", point2);

// 	return (0);
// }

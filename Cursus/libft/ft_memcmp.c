/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:33:48 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/11 13:37:20 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t_s1;
	unsigned char	*t_s2;

	t_s1 = (unsigned char *)s1;
	t_s2 = (unsigned char *)s2;
	while (0 < n--)
	{
		if (*t_s1 != *t_s2)
			return (*t_s1 - *t_s2);
		t_s1++;
		t_s2++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str1[100] = "Learning_Is_Fun";
//     char str2[100] = "Learnxng_Is_Fun";

//     int result1;
//     int result2;

// 	printf("string1 : %s \nstring2 : %s\n", str1, str2);
// 	result1 = ft_memcmp(str1, str2, 6);
// 	printf("[ft_memcmp]: %d\n", result1);
// 	result2 = memcmp(str1, str2, 6);
// 	printf("[   memcmp]: %d\n", result2);

// 	return (0);
// }
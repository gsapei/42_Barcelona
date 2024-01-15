/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:39:38 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/10 19:04:37 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*t_s1;
	char	*t_s2;

	t_s1 = (char *)s1;
	t_s2 = (char *)s2;
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
// 	result1 = ft_strncmp(str1, str2, 6);
// 	printf("[ft_strncmp]: %d\n", result1);
// 	result2 = strncmp(str1, str2, 6);
// 	printf("[   strncmp]: %d\n", result2);

// 	return (0);
// }

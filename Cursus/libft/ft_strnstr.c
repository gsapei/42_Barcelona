/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:38:11 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/11 14:13:49 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*t_haystack;
	char	*t_needle;
	char	*t_backup;

	t_haystack = (char *)haystack;
	t_needle = (char *)needle;
	if (!*t_needle)
		return (t_haystack);
	while (*t_haystack++ && 0 < len--)
	{
		if (*t_haystack == *t_needle)
		{
			t_backup = t_haystack;
			while (*t_haystack++ == *t_needle++ && 0 < len--)
				if (!*t_needle)
					return (t_backup);
			t_needle = (char *)needle;
			t_haystack = t_backup;
		}
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str1[100] = "Learning_Is_Fun";
//     char str2[100] = "";

//     char    *result1;
//     char    *result2;

// 	printf("string1 : %s \nstring2 : %s\n", str1, str2);
// 	result1 = ft_strnstr(str1, str2, 4);
// 	printf("[ft_strnstr]: %s\n", result1);
// 	result2 = strnstr(str1, str2, 4);
// 	printf("[   strnstr]: %s\n", result2);

// 	return (0);
// }

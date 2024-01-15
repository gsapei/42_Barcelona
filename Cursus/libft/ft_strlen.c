/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:24:06 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/10 17:03:26 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

// int	main(void)
// {
// 	char dst[100] = "Learning_Is_Fun";
// 	printf("    Original string : %s\n ", dst);
// 	int i = ft_strlen(dst);
// 	printf("ft_strlen string : %s [%d]\n ", dst, i);
// 	int j = strlen(dst);
// 	printf("strlen string : %s [%d]\n ", dst, j);

// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:56:47 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/10 16:17:11 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *) s;
	while (0 < n)
	{
		*temp = (unsigned char) '\0';
		temp++;
		n--;
	}
}

// int	main(void)
// {
// 	char dst[100] = "Learning_Is_Fun";
// 	char dst2[100] = "Learning_Is_Fun";

// 	printf("   Original string : %s\n ", dst);
// 	ft_bzero(dst + 2, 3);
// 	printf("ft_strlcat string : %s\n ", dst);
// 	bzero(dst2 + 2, 3);
// 	printf("   strlcat string : %s\n ", dst2);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:56:33 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/15 15:22:53 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <string.h>
// #include <stdio.h>

char	*ft_strdup(const char *s1)
{
	int		counter;
	char	*t_s1;
	char	*copy;
	char	*t_copy;

	counter = 1;
	t_s1 = (char *)s1;
	while (*t_s1++)
		counter++;
	copy = malloc (counter);
	if (!copy)
		return (NULL);
	t_s1 = (char *)s1;
	t_copy = copy;
	while (*t_s1)
		*copy++ = *t_s1++;
	return (t_copy);
}

// int main(){
// 	char *str = "cadena original";

// 	printf("ft_strdup: %s\n", ft_strdup(str));
// 	printf("   strdup: %s\n", strdup(str));

// }

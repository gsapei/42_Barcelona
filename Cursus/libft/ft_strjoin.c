/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:49:01 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/12 16:57:27 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lenght;
	char	*t_s1;
	char	*t_s2;
	char	*result;
	char	*t_result;

	t_s1 = (char *)s1;
	t_s2 = (char *)s2;
	lenght = 0;
	while (*t_s1++)
		lenght++;
	while (*t_s2++)
		lenght++;
	result = malloc (lenght * sizeof(char));
	t_result = result;
	while (*s1)
		*t_result++ = *s1++;
	while (*s2)
		*t_result++ = *s2++;
	return (result);
}

// int main(){
// 	char str1[20] = "-CADENA NRO 1";
// 	char str2[20] = "-cadena nro 2";
// 	printf("Cadena resultante: %s\n",ft_strjoin(str1,str2));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:19:06 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/12 16:48:14 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		t_start;
	char	*t_s;
	char	*substr;
	char	*t_substr;

	t_s = (char *)s;
	t_start = start;
	while (0 < t_start--)
		t_s++;
	substr = malloc (len * sizeof(char));
	if (!substr)
		return (NULL);
	t_substr = substr;
	while (*t_s && 0 < len--)
		*t_substr++ = *t_s++;
	return (substr);
}

// int main(){
// 	const char *str = "0123456789";
// 	printf("Cadena origen: %s\n",str);
// 	printf("Cadena resultante: %s\n",ft_substr(str,2,5));
// }
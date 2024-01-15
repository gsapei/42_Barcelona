/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:58:31 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/12 18:00:50 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

static int	ft_isinset(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static char	*ft_getnonset(const char *s1, char *set, int direction)
{
	char	*t_s1;

	t_s1 = (char *)s1;
	if (direction == 0)
	{
		while (*t_s1)
			t_s1++;
		t_s1--;
	}
	while (*t_s1)
	{
		if (ft_isinset (*t_s1, set) == 0)
			return (t_s1);
		if (direction == 1)
			t_s1++;
		if (direction == 0)
			t_s1--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t_s1;
	char	*start;
	char	*end;
	char	*result;
	int		lenght;

	lenght = 0;
	start = ft_getnonset (s1, (char *)set, 1);
	end = ft_getnonset (s1, (char *)set, 0);
	t_s1 = start;
	while (*t_s1++ && t_s1 <= end)
		lenght++;
	result = malloc (lenght * sizeof(char));
	t_s1 = start;
	while (*t_s1 && t_s1 <= end)
		*result++ = *t_s1++;
	return (result - (lenght + 1));
}

// int main(){
// 	char str[45] = "_+_!_!HOLA!! SOY_LA+CADENA RESULTANTE_+!!_!!";
// 	char set[5] = "_+!";
// 	printf("Cadena resultante: %s\n",ft_strtrim(str,set));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:57:10 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/15 15:25:35 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	ft_set_null_delimiter(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
		{
			*s = '\0';
			count++;
		}
		s++;
	}
	return (count + 1);
}

static char	*ft_get_next_str(char *s)
{
	while (*s)
		s++;
	return (s + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	**t_result;
	char	*t_s;
	int		lenght;

	t_s = ft_strdup(s);
	lenght = ft_set_null_delimiter(t_s, c);
	result = malloc ((lenght + 1) * sizeof (char *));
	t_result = result;
	while (0 < lenght)
	{
		*t_result = ft_strdup(t_s);
		t_s = ft_get_next_str(t_s);
		t_result++;
		lenght--;
	}
	t_result = NULL;
	return (result);
}
/*
int main()
{
	char	str[100] = ",,,cadena separada,por comas,pero esta ultima no,,,";
	char	**result;
	int		i = 0;

	result = ft_split (str,',');
	while (*result)
	{
		printf("[%d] %s\n",i,*result);
		result++;
		i++;
	}
}
*/
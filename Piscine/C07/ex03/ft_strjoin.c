/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:35:50 by gsapei            #+#    #+#             */
/*   Updated: 2023/11/08 17:28:20 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*cpy_str(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		*dest = src[i];
		i++;
		dest++;
	}
	dest -= i;
	return (dest);
}

int	count_str_chars(char *str)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (str[i])
	{
		total++;
		i++;
	}
	return (total);
}

int	count_array_chars(char **str, int size)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	if (str)
	{
		while (i < size)
		{
			total += count_str_chars(str[i]);
			i++;
		}
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*result_beg;
	int		sep_n;
	int		str_n;
	int		i;

	str_n = count_array_chars(strs, size);
	sep_n = count_str_chars(sep);
	result = malloc((str_n * size) + (sep_n * size));
	if (size == 0 || !strs)
		return (result);
	result_beg = result;
	i = 0;
	while (i < size)
	{
		cpy_str(result, *strs);
		result += count_str_chars(*strs);
		cpy_str(result, sep);
		result += sep_n;
		strs++;
		i++;
	}
	result -= sep_n;
	*result = '\0';
	return (result_beg);
}

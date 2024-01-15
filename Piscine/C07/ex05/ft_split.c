/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:13:20 by gsapei            #+#    #+#             */
/*   Updated: 2023/11/09 18:56:33 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_character_exist(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_str(char *str, char *charset)
{
	int	count;

	count = 0;
	if (ft_character_exist(*str, charset) == 0)
		count++;
	while (*str)
	{
		if (ft_character_exist(*str, charset) == 1 && (ft_character_exist(*(str
						+ 1), charset) == 0 && *(str + 1) != '\0'))
		{
			count++;
		}
		str++;
	}
	return (count);
}

int	ft_nextstr_pos(char *str, char *charset, int pos)
{
	while (str[pos])
	{
		if (ft_character_exist(str[pos], charset) == 0)
			return (pos);
		pos++;
	}
	return (pos);
}

void	ft_strcpy(char *dest, char *src, int src_beg, int n)
{
	char	*aux;

	aux = dest;
	while (src_beg < n)
	{
		*aux = src[src_beg];
		aux++;
		src_beg++;
	}
	*aux = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	char	**result_beg;
	int		i;
	int		beg;

	i = 0;
	beg = ft_nextstr_pos(str, charset, 0);
	result = malloc(sizeof(char *) * ft_count_str(str, charset) + 1);
	result_beg = result;
	while (str[i++])
	{
		if ((i != 0) && ((ft_character_exist(str[i], charset) == 1
					&& ft_character_exist(str[i - 1], charset) == 0)
				|| (ft_character_exist(str[i], charset) == 0 && !str[i + 1])))
		{
			*result = (char *)malloc(i - beg + 1);
			if (!str[i + 1])
				ft_strcpy(*result, str, beg, i + 1);
			else
				ft_strcpy(*result, str, beg, i);
			result++;
			beg = ft_nextstr_pos(str, charset, i);
		}
	}
	return (result_beg);
}

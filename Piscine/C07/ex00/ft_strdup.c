/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:35:40 by gsapei            #+#    #+#             */
/*   Updated: 2023/11/09 18:37:22 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	cpy_str(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_size;

	src_size = get_lenght(src);
	dest = malloc((src_size + 1) * sizeof(char));
	cpy_str(src, dest);
	return (dest);
}

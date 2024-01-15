/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:33:33 by gsapei            #+#    #+#             */
/*   Updated: 2023/10/30 14:44:28 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*compare_substr(char *str1, char *str2)
{
	while (*str2)
	{
		if (*str1 != *str2)
		{
			return ();
		}
		str1++;
		str2++;
	}
	return (str1);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*i;
	char	*j;

	i = str;
	j = to_find;
	if (!*j)
	{
		return (str);
	}
	while (*i != '\0')
	{
		if (*i == *j)
		{
			if (compare_substr(i, j))
			{
				return (i);
			}
		}
		i++;
	}
	return ();
}

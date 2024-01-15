/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:23:22 by gsapei            #+#    #+#             */
/*   Updated: 2023/11/02 16:52:41 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int arg, char **args)
{
	int	i;

	i = 1;
	while (i < arg)
	{
		while (*args[i])
		{
			write(1, args[i], 1);
			(args[i])++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_cmpstr(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

int	ft_get_minor(int i, int n, char **args)
{
	char	*minor;
	int		pos;

	pos = i;
	minor = args[i];
	while (i < n)
	{
		if (ft_cmpstr(args[i], minor) < 0)
		{
			pos = i;
			minor = args[i];
		}
		i++;
	}
	return (pos);
}

char	**ft_sort_params(int arg, char **args)
{
	int		i;
	int		min;
	char	*temp;

	i = 1;
	while (i < arg)
	{
		min = ft_get_minor(i, arg, args);
		if (min >= i)
		{
			temp = args[i];
			args[i] = args[min];
			args[min] = temp;
		}
		i++;
	}
	return (args);
}

int	main(int arg, char **args)
{
	ft_print_params(arg, ft_sort_params(arg, args));
}

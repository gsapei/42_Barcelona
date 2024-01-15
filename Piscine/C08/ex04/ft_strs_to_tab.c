/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:55:03 by gsapei            #+#    #+#             */
/*   Updated: 2023/11/09 15:49:08 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_str_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_str_lenght(int ac, char **av)
{
	int	total;
	int	i;

	i = 0;
	total = 0;
	while (i < ac)
	{
		total += ft_str_lenght(av[i]);
		i++;
	}
	return (total);
}

char	*str_cpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*s1;

	s1 = malloc(ft_total_str_lenght(ac, av) * sizeof(struct s_stock_str));
	i = 0;
	while (i < ac)
	{
		s1[i].size = ft_str_lenght(av[i]);
		s1[i].str = av[i];
		s1[i].copy = malloc(s1[i].size + 1);
		str_cpy(av[i], s1[i].copy);
		i++;
	}
	return (s1);
}
/*
int	main(void)
{
	struct s_stock_str	*par;
	char				*strs[4];
	char				*str1;
	char				*str2;
	char				*str3;
	char				*str4;
	int					size;
	int					i;

	i = 0;
	str1 = "Hola";
	str2 = "a mi";
	str3 = "mundo";
	str4 = "!";
	size = 4;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	par = ft_strs_to_tab(size, strs);
	while (i < size)
	{
		printf("par[%d].size: %d\n", i, par[i].size);
		printf("par[%d].str: %s\n", i, par[i].str);
		printf("par[%d].copy: %s\n", i, par[i].copy);
		i++;
	}
}*/

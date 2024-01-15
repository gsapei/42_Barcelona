/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:35:28 by gsapei            #+#    #+#             */
/*   Updated: 2023/11/02 16:44:05 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_print_params(int arg, char **args)
{
	int	i;

	i = 1;
	while (i < arg)
	{
		ft_print_str(args[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int arg, char **args)
{
	ft_print_params(arg, args);
}

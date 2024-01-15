/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:20:52 by gsapei            #+#    #+#             */
/*   Updated: 2023/11/02 16:44:55 by gsapei           ###   ########.fr       */
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

	i = arg - 1;
	while (i > 0)
	{
		ft_print_str(args[i]);
		write(1, "\n", 1);
		i--;
	}
}

int	main(int arg, char **args)
{
	ft_print_params(arg, args);
}

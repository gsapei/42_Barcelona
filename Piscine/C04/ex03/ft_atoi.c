/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:36:54 by gsapei            #+#    #+#             */
/*   Updated: 2023/11/01 14:51:13 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_sign(char *str)
{
	int	sign;

	sign = 1;
	while (*str)
	{
		if (*str >= 48 && *str <= 57)
			return (sign);
		else if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int		ans;
	char	*s1;
	char	*aux;

	ans = 0;
	s1 = str;
	while (*str)
	{
		if (*str != ' ' && *str != '+' && *str != '-' && !(*str >= 48
				&& *str <= 57) && !(*str >= 0 && *str <= 25))
			return (get_sign(s1) * ans);
		if (*str >= 48 && *str <= 57)
		{
			aux = str;
			while (*aux >= 48 && *aux <= 57)
			{
				ans = ans * 10 + *aux - '0';
				aux++;
			}
			break ;
		}
		str++;
	}
	return (get_sign(s1) * ans);
}

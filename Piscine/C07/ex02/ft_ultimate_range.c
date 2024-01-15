/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:42:46 by gsapei            #+#    #+#             */
/*   Updated: 2023/11/06 18:17:58 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*aux;
	int	m;
	int	i;

	m = min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	aux = (int *)malloc(sizeof(*aux) * (max - min));
	if (aux == NULL)
		return (-1);
	else
	{
		i = 0;
		while (min < max)
		{
			aux[i] = min;
			min++;
			i++;
		}
		*range = aux;
		return (max - m);
	}
}

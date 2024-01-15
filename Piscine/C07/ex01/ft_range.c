/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:50:36 by gsapei            #+#    #+#             */
/*   Updated: 2023/11/09 18:37:38 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	*result;
	int	aux;

	if (max - min < 1)
		return (0);
	aux = min;
	array = malloc((max - min) * sizeof(int));
	result = array;
	while (aux < max)
	{
		*array = aux;
		aux++;
		array++;
	}
	return (result);
}

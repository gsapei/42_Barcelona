/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:41:41 by gsapei            #+#    #+#             */
/*   Updated: 2023/10/24 18:17:45 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	return_min(int *tab, int size, int j)
{
	int	index_min;
	int	min;

	index_min = j;
	min = tab[index_min];
	while (j < size)
	{
		if (tab[j] < min)
		{
			min = tab[j];
			index_min = j;
		}
		j++;
	}
	return (index_min);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	index_min;

	i = 0;
	while (i < size)
	{
		index_min = return_min(tab, size, i);
		temp = tab[i];
		tab[i] = tab[index_min];
		tab[index_min] = temp;
		i++;
	}
}

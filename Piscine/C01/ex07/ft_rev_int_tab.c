/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:47:13 by gsapei            #+#    #+#             */
/*   Updated: 2023/10/23 20:22:39 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;	
	int	temp;

	index = 0;
	while (index < (size / 2))
	{
		temp = tab[index];
		tab [index] = tab [size - 1 - index];
		tab [size - 1 - index] = temp;
		index++;
	}
}

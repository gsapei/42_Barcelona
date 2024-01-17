/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:32:06 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/17 18:38:13 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		total;

	aux = lst;
	total = 0;
	while (aux != NULL)
	{
		total++;
		aux = aux->next;
	}
	return (total);
}

// int main()
// {
// 	char	*primero = "primera cadena";
// 	char	*segundo = "segunda cadena";
// 	char	*tercero = "tercera cadena";

// 	t_list	*primer_nodo;
// 	t_list	*segundo_nodo;
// 	t_list	*tercer_nodo;

// 	primer_nodo = ft_lstnew(primero);
// 	segundo_nodo = ft_lstnew(segundo);
// 	tercer_nodo = ft_lstnew(tercero);

// 	primer_nodo->next = segundo_nodo;
// 	segundo_nodo->next = tercer_nodo;

// 	printf("[%d]\n",ft_lstsize(primer_nodo));
// }

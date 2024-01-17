/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:38:47 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/17 18:43:09 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	aux = lst;
	while (aux->next != NULL)
		aux = aux->next;
	return (aux);
}

// int main()
// {
// 	char	*primero = "primera cadena";
// 	char	*segundo = "segunda cadena";
// 	char	*tercero = "tercera cadena";

// 	t_list	*primer_nodo;
// 	t_list	*segundo_nodo;
// 	t_list	*tercer_nodo;
// 	t_list	*result;

// 	primer_nodo = ft_lstnew(primero);
// 	segundo_nodo = ft_lstnew(segundo);
// 	tercer_nodo = ft_lstnew(tercero);

// 	primer_nodo->next = segundo_nodo;
// 	segundo_nodo->next = tercer_nodo;

// 	result = ft_lstlast(primer_nodo);
// 	printf("%s\n",result->content);
// }
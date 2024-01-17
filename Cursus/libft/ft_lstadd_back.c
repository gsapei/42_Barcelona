/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:45:57 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/17 18:49:46 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = *lst;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = new;
}

// void    ft_print_content(t_list *list)
// {
//     t_list  *aux;
// 	char	*str;

//     aux = list;
//     while (aux != NULL)
//     {
// 		str = (char *)aux->content;
// 		while (*str)
//         	printf("%c", *str++);
//         aux = aux->next;
// 		printf("\n");
//     }
// }

// int main()
// {
// 	char	*primero = "primera cadena";
// 	char	*segundo = "segunda cadena";
// 	char	*tercero = "tercera cadena";

// 	char	*nuevo = "nueva cadena";

// 	t_list	*primer_nodo;
// 	t_list	*segundo_nodo;
// 	t_list	*tercer_nodo;
// 	t_list	*nuevo_nodo;

// 	primer_nodo = ft_lstnew(primero);
// 	segundo_nodo = ft_lstnew(segundo);
// 	tercer_nodo = ft_lstnew(tercero);

// 	nuevo_nodo = ft_lstnew(nuevo);

// 	primer_nodo->next = segundo_nodo;
// 	segundo_nodo->next = tercer_nodo;

// 	ft_lstadd_back(&primer_nodo,nuevo_nodo);

// 	ft_print_content(primer_nodo);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:21:53 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/17 15:33:13 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	n;
	int	i;

	i = 0;
	n = ft_strlen((char *)s);
	while (*s)
	{
		(*f)(i, s);
		i++;
		s++;
	}
}

static void	to_upper_function(unsigned int i, char *c)
{
	if (*c >= 97 && *c <= 122)
		*c -= 32;
}

// int main()
// {
//     char    str[50] = "esta cadena va a ser transformada";
//     ft_striteri(str,to_upper_function);
//     printf("%s\n",str);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsapei <gsapei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:36:30 by gsapei            #+#    #+#             */
/*   Updated: 2024/01/11 17:11:14 by gsapei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	char	*temp;
	size_t	total;

	total = count * size;
	result = (void *)malloc (count * size);
	temp = result;
	while (0 < total--)
		*temp = '\0';
	if (result)
		return (result);
	else
		return (NULL);
}

// int main()
// {
//         int i;
//         int *ptr;
//         int *ptr2;
//         int sum = 0;

//         ptr = ft_calloc(10, sizeof(int));
//         ptr2 = calloc(10, sizeof(int));

//         if (ptr == NULL) {
//             printf("Error! ft_calloc memory not allocated.");
//             exit(0);
//         }
//         if (ptr2 == NULL) {
//             printf("Error! calloc memory not allocated.");
//             exit(0);
//         }   

//         printf("calculating the sequence sum of the first 10 terms \n");
//         for (i = 0; i < 10; ++i) { * (ptr + i) = i;
//             sum += * (ptr + i);
//         }
//         printf("ft_calloc Sum: %d\n", sum);
//         free(ptr);
//         sum = 0;

//         for (i = 0; i < 10; ++i) { * (ptr2 + i) = i;
//             sum += * (ptr2 + i);
//         }
//         printf("   calloc Sum: %d\n", sum);
//         free(ptr2);

//         return 0;
// }

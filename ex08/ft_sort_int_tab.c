/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:06:26 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/27 21:13:49 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	atual;
	int	proximo;
	int	temp;

	atual = 0;
	while (atual < size - 1)
	{
		proximo = atual + 1;
		while (proximo < size)
		{
			if (tab[atual] > tab[proximo])
			{
				temp = tab[atual];
				tab[atual] = tab[proximo];
				tab[proximo] = temp;
			}
			proximo++;
		}
		atual++;
	}
}

// int	main(void)
// {
// 	int	arr[10] = {2,1,3,4,7,6,16,8,9,11};
// 	int	size;
// 	int	i;
// 	size = 10;
// 	i = 0;
// 	ft_sort_int_tab(arr, size);
// 	while (i < size)
// 		printf("%d ", arr[i++]);
// 	return (0);
// }
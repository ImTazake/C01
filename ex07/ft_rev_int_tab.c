/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:06:22 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/27 21:09:33 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	inicio;
	int	fim;
	int	temp;

	inicio = 0;
	fim = size - 1;
	while (inicio < fim)
	{
		temp = tab[inicio];
		tab[inicio] = tab[fim];
		tab[fim] = temp;
		inicio++;
		fim--;
	}
}

// int	main(void)
// {
// 	int	arr[10] = {1,2,3,4,5,6,7,8,9,10};
// 	int	size;
// 	int	i;
// 	size = 10;
// 	i = 0;
// 	ft_rev_int_tab(arr, size);
// 	while (i < size)
// 		printf("%d ", arr[i++]);
// 	return (0);
// }
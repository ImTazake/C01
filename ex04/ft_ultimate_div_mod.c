/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:06:09 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/27 21:16:53 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *a / *b;
	*b = swap % *b;
}

// int main()
// {
// 	int	a = 10;
// 	int	b = 20;
// 	int	*p = &a;
// 	int *q = &b;
// 	ft_ultimate_div_mod(p, q);
// 	printf("%d, %d\n", *p, *q);
// }
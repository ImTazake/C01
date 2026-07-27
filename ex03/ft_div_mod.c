/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:06:06 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/27 21:19:57 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {
// 	int	a = 2;
// 	int	b = 2;
// 	int	*p = &a;
// 	int	*q = &b;
// 	ft_div_mod(a, b, p, q);
// 	printf("%d, %d, %d ,%d\n", a, b, *p, *q);
// }
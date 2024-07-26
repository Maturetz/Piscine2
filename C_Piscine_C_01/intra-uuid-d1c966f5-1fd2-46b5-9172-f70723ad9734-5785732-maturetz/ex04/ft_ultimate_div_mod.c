/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 01:14:59 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/07 01:15:44 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

/* int	main(void)
{
	int	c = 7;
	int	*a = &c;
	int	d = 2;
	int	*b = &d;

	ft_ultimate_div_mod(a, b);

	printf(" a = div = %i\n b = mod = %i\n", c, d);
} */

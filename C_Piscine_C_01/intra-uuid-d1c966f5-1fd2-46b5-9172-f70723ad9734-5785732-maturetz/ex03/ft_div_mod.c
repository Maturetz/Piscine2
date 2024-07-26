/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:06:00 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/04 20:06:13 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int	a = 7;
	int	b = 2;
	int	c = 0;
	int	*div = &c;
	int	d = 0;
	int	*mod = &d;

	ft_div_mod(a, b, div, mod);

	printf("div = %i\nmod = %i\n", c, d);
} */

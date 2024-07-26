/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:05:57 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/18 14:50:13 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *p1, int *p2)
{
	int	tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

/* int	main(void)
{
	int	c = 1;
	int	*p1 = &c;
	int	d = 9;
	int	*p2 = &d;

	ft_swap(p1, p2);

	printf("a = %i\nb = %i\n", c, d);
} */

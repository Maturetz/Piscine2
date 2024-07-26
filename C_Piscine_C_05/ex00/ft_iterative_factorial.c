/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:43:36 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/20 02:53:35 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	opt;

	if (nb < 0 || nb > 12)
		return (0);
	i = 2;
	opt = 1;
	while (i <= nb)
	{
		opt *= i;
		++i;
	}
	return (opt);
}

/* void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int	main(void)
{
	int	n;

	n = 7;
	ft_putnbr(ft_recursive_factorial(n));
} */

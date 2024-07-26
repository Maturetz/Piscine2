/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:43:47 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/18 20:43:49 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	opt;

	if (power < 0)
		return (0);
	opt = 1;
	while (power > 0)
	{
		opt *= nb;
		power--;
	}
	return (opt);
}

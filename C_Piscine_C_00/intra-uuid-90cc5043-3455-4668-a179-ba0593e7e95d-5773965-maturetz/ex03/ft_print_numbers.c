/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:48:55 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/04 21:13:51 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	var;

	var = '0';
	while (var <= '9')
	{
		write(1, &var, 1);
		var++;
	}
}

/* int	main(void)
{
	ft_print_numbers();
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:15:54 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/02 20:55:41 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	var;

	var = 'a';
	while (var <= 'z')
	{
		write(1, &var, 1);
		var++;
	}
}

/* int	main(void)
{
	ft_print_alphabet();
} */

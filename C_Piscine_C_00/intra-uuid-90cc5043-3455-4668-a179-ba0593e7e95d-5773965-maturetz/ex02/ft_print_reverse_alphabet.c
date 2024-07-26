/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:36:51 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/02 19:45:27 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	var;

	var = 'z';
	while (var >= 'a')
	{
		write(1, &var, 1);
		var--;
	}
}

/* int	main(void)
{
	ft_print_reverse_alphabet()
} */

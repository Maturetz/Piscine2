/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:54:48 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/17 21:08:06 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char a)
{
	write(1, &a, 1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	j;
	int	k;

	(void)argc;
	j = 1;
	while (argv[j])
	{
		k = 0;
		while (argv[j][k] != '\0')
		{
			ft_putchar(argv[j][k]);
			k++;
		}
		j++;
		ft_putchar('\n');
	}
}

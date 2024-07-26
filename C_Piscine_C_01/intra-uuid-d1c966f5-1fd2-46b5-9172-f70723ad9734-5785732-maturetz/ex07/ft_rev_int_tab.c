/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 01:17:14 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/07 12:41:57 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size = size -1;
	while (i < size)
	{
		tmp = tab[size];
		tab[size] = tab[i];
		tab[i] = tmp;
		i++;
		size--;
	}
}

/* int main(void)
{
	int i = 0;
	int tab[7] = {1, 2, 3, 4, 5, 6, 5};

	printf("Original array:\n");
	while (i < 7) {
		printf("%d ", tab[i]);
		i++;
	}
    
	printf("\n");

	i = 0; // Reset i
	ft_rev_int_tab(&tab[0], 7);

	printf("Updated (Reversed) array:\n");
	while (i < 7) {
		printf("%d ", tab[i]);
		i++;
	}

	printf("\n");

	return 0;
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 01:17:49 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/07 12:54:36 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/* int main()
{
	int arr[] = {5, 2, -8, 12, 1, 6};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	ft_sort_int_tab(arr, size);

	printf("Sorted array: ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
} */

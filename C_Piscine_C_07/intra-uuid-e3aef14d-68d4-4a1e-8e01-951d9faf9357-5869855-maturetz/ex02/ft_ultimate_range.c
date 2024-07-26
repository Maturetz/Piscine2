/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:27:51 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/25 22:54:58 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (i);
}

// int	main(void)
// {
// 	int	*range;
// 	int	min = 5;
// 	int	max = 10;
// 	int	size;
// 	int	i;

// 	size = ft_ultimate_range(&range, min, max);
// 	if (size == -1)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (1);
// 	}
// 	else if (size == 0)
// 	{
// 		printf("Invalid range (min >= max).\n");
// 		return (0);
// 	}
// 	printf("Range size: %d\n", size);
// 	for (i = 0; i < size; i++)
// 		printf("range[%d] = %d\n", i, range[i]);
// 	free(range);
// 	return (0);
// }

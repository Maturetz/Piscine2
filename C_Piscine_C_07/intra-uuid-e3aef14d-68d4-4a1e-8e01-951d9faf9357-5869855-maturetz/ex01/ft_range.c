/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:27:49 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/25 22:55:04 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (NULL);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}

// int main(void)
// {
// 	int	min = 5;
// 	int	max = 10;
// 	int	*range;
// 	int	i;

// 	range = ft_range(min, max);
// 	if (range == NULL)
// 	{
// 		printf("Range is NULL\n");
// 		return (1);
// 	}
// 	printf("Range from %d to %d: ", min, max);
// 	for (i = 0; i < max - min; i++)
// 		printf("%d ", range[i]);
// 	printf("\n");
// 	free(range);
// 	return (0);
// }

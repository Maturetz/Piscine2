/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:27:46 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/26 00:39:43 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*tab;

	i = 0;
	tab = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (tab == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = src[i];
	return (tab);
}

// int	main(void)
// {
// 	char	original[] = "Hello, world!";
// 	char	*duplicate;

// 	printf("Original string: %s\n", original);
// 	printf("Length of original string: %d\n", ft_strlen(original));
// 	duplicate = ft_strdup(original);
// 	if (duplicate == NULL)
// 	{
// 		fprintf(stderr, "Memory allocation failed\n");
// 		return (1);
// 	}
// 	printf("Duplicate string: %s\n", duplicate);
// 	printf("Length of duplicate string: %d\n", ft_strlen(duplicate));

// 	// Free the allocated memory for the duplicate string
// 	free(duplicate);
// 	return (0);
// }

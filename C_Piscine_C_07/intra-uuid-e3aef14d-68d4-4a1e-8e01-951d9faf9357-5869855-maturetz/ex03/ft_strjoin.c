/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:27:54 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/26 00:59:20 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_count(int size, char **strs, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	if (count <= 0)
		return (1);
	return (count + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		c;

	tab = malloc(ft_count(size, strs, sep) * sizeof(char));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			tab[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			tab[c++] = sep[j++];
		i++;
	}
	tab[c] = '\0';
	return (tab);
}

// int	main(void)
// {
// 	char	*strings[] = {"Hello", "world", "this", "is", "a", "test"};
// 	char	*separator = "...";
// 	int		size = 6;

// 	char	*result = ft_strjoin(size, strings, separator);
// 	if (result)
// 	{
// 		printf("Joined string: %s\n", result);
// 		free(result);
// 	}
// 	else
// 		printf("Memory allocation failed\n");
// 	return (0);
// }

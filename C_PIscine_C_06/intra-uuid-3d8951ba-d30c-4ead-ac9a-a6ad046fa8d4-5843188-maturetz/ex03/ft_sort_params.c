/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:48:21 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/18 17:52:46 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_swap(char **p1, char **p2)
{
	char	*tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s2[i] != '\0' && s1[i] == '\0')
		|| (s1[i] != '\0' && s2[i] == '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

void	print_params(int argc, char *argv[])
{
	int	index;
	int	subindex;

	index = 1;
	while (index < argc)
	{
		subindex = 0;
		while (argv[index][subindex] != '\0')
		{
			ft_putchar(argv[index][subindex]);
			subindex++;
		}
		ft_putchar('\n');
		index++;
	}
}

int	main(int argc, char *argv[])
{
	int	j;

	j = 1;
	while (j < argc - 1)
	{
		if (ft_strcmp(argv[j + 1], argv[j]) < 0)
		{
			ft_swap(&argv[j], &argv[j + 1]);
			j = 1;
		}
		else
			j++;
	}
	print_params(argc, argv);
	return (0);
}

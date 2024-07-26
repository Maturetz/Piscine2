#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rot(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		c += 13;
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		c -= 13;
	return (c);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		while (*argv[1])
			ft_putchar(ft_rot(*argv[1]++));
	write (1, "\n", 1);
}

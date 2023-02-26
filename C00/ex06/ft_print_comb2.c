#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	k;

	i = 0;
	while (i < 100)
  	{
		k = i + 1;
		while (k < 100)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			ft_putchar(' ');
			ft_putchar(k / 10 + 48);
			ft_putchar(k % 10 + 48);
			if ((i / 10 != 9) || (i % 10 != 8))
				write(1, ", ", 2);
			k++;
		}
		i++;
	}  
}

int	main(void)
{
	ft_print_comb2();
}
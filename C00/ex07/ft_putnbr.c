#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	number;

	number = nb;
	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		number = number % 10;
	}
	if (number < 10)
		ft_putchar(number + 48);
}

int	main(void)
{
	ft_putnbr(-2147483648);
}
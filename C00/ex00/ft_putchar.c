#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

int main (int argc, char *argv[])
{
  ft_putchar('F');
  ft_putchar('o');
  ft_putchar('i');
  return 0;
}

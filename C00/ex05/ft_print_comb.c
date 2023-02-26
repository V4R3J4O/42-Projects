#include <unistd.h>

void  ft_print_comb(void)
{
  int a;
  int b;
  int c;
  char aux;

  a = 0;
  while (a <= 7) {
    b = a + 1;
    while (b <= 8) {
      c = b + 1;
      while (c <= 9) {
        aux = a + 48;
        write(1, &aux,1);
        aux = b + 48;
        write(1, &aux, 1);
        aux = c + 48;
        write(1, &aux, 1);
        if (a != 7) {
          write(1, ", ", 2);
        }
        c++;
      }
      b++;
    }
    a++;
  }
}

int main (int argc, char *argv[])
{
  ft_print_comb();
  return 0;
}

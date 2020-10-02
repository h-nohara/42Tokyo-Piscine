#include <stdio.h>

int ft_find_next_prime(int nb);

int main(){
  printf("%d\n", ft_find_next_prime(-10));
  printf("%d\n", ft_find_next_prime(254));
  printf("%d\n", ft_find_next_prime(257));
  printf("%d\n", ft_find_next_prime(2147483647));
  printf("%d\n", ft_find_next_prime(2147483645));
}

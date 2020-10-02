#include <stdio.h>
#include <limits.h>

int ft_atoi(char *str);

int main(){
  printf("%d\n", ft_atoi(" ----+-2147483649ab567"));
  printf("%d ", INT_MAX);
  printf("%d", INT_MIN); 
  return 0;
}

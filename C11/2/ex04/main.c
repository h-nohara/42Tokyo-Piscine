#include <stdio.h>

int ft_is_sort(int *tab, int length, int (*f)(int, int));

int f(int a, int b){
  return (a - b);
}

int main(){
  int arr[7] = {1, 2, 3, 5, 5, 5, 4};
  printf("%d\n", ft_is_sort(arr, 7, f));
  return 0;
}

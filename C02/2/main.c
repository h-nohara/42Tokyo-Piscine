#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(){
  char s[] = "salut, comment";
  char dest[100];
  ft_strncpy(dest, s, 50);
 printf(dest);
 printf("\n");
  printf("heoge");
  return 0;
}

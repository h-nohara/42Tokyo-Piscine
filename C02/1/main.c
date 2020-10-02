#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(){
  char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  ft_strcapitalize(s);
 printf(s);
  return 0;
}

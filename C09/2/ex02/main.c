#include <stdio.h>

char **ft_split(char *str, char *charset);

int main(){
  char s[] = "abcd";
  char t[] = "bc";
  char **new = ft_split(s, t);
  int i = -1;
  while (new[++i])
    printf("%s\n", new[i]);
  return (0);
}

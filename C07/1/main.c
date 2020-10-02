#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(){
  int size = 3;
  char *strs[3] = {" hoge", " fuge", " dayone"};
  printf("%s\n", ft_strjoin(size, strs, "||"));
  return 0;
}

char **ft_split(char *str, char *charset);

int main(){
  char s1[] = "hoge goge  a ";
  char s2[] = " ";
  char **res = ft_split(s1, s2);
  res++;
  return (0);
}

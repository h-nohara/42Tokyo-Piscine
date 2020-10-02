int *ft_map(int *tab, int length, int (*f)(int));

int f(int a){
  return (a * 2);
}

int main(){
  int tab[3] = {1, 0, -1};
  ft_map(tab, 3, f);
  return 0;
}

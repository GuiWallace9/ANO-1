#include <stdio.h>
/*RECEBE UM INTEIRO N E DEVOLVE SE ELE É OU NÃO PALÍNDROMO*/

int main() {
  int n, number, inverso, resto;

  printf("Digite o número: \n");
  scanf("%d", &n);

  number = n;
  inverso = 0;

  while(number != 0) {
    resto = number%10;
    inverso = inverso*10 + resto;
    number = number / 10;
  }

  if (inverso == n) {
    printf("O número %d é palíndromo \n", n);
  } else {
    printf("O número %d não é palíndromo \n", n);
  }

  return 0;
}

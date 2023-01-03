#include <stdio.h>
/*FATORA O NUMERO EM PRIMOS*/
int main() {
  int num;
  int fator = 0;
  int i = 2;
  printf("Qual o número \n");
  scanf("%d", &num);

  while ((num/i)!= 0) {
    while ((num%i) == 0) {
      fator = fator + 1;
      num = num / i;
    }
    if (fator != 0) {
      printf("Fator %d multiplicidade %d \n", i, fator);
    }
    i = i + 1;
    fator = 0;
  }
  return 0;
}

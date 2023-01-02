#include <stdio.h>
/*Dado um número real x e um numero real eps > 0, calcular uma aproxima¸c˜ao
de e^x usando série infinita:*/
int main() {

double fraction, eps, x, exp = 1, fac = 1, value;
int i, n, j;

printf("Digite o valor de X: \n");
scanf("%lf", &x);
printf("Digite o valor de EPS: [0.001; 0.0001; 0.00001] \n");
scanf("%lf", &eps);


value = 1;
n = 1;

fraction = exp / fac;

while (fraction >= eps) {
  for(i=n; i>0; i--) {
    exp = exp*x;
  }
  for(j=n; j>0; j--) {
    fac = fac * j;
  }
  fraction = exp / fac;
  value = value + fraction;
  n++;
  exp = 1;
  fac = 1;
}

printf("%f", value);


  return 0;

}

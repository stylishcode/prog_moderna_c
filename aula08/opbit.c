#include <stdio.h>

/* &
 * |
 * ^ xor
 * ~
 * <<
 * >>
*/ 

int main(void) {
  int a = 359;
  int chave = 3;
  
  // 0 é falso
  // Qualquer coisa diferente de 0 é verdadeir0

  printf("O resultado eh %d\n", a ^ chave); 

  return 0;
}

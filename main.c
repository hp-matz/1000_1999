#include <stdio.h>
/*Elabore um programa, fluxograma e algoritmo com português estruturado gere número de 1000 a 1999 e mostre aqueles que a divisão por 11 dão resto 5. E demonstre a quantidade de números.*/

int main(void) {
 
  int x = 999;
  int resultado = x%11;
  
 do{ //do while para v2
      x++;

      if (resultado = 5) {
      printf("%d ", x);
      }
    }while(x<1999);

  return 0;
}
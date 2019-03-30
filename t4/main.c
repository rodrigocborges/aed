#include <stdio.h>
#include "lib.h"

int main(){
  int lista[TAM] = {4,5,6,7,2,3,12,13,11,10};
  Lista* l = cria(lista);
  add(l, 2, 1998);
  visualiza(l);
  printf("\nMaior numero: %d\n", maior(l));
  printf("\nMenor numero: %d\n", menor(l));
  return 0;
}

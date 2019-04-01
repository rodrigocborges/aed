#include <stdio.h>
#include "lib.h"

int main(){
  /*Lista contiguidade física com descritor*/
  int lista[TAM] = {4,5,6,7,2,3,12,13,11,10};
  Lista* l = cria(lista);
  add(l, 2, 1998);
  add(l, 3, 2019);
  add(l, 0, 22222);
  visualiza(l);
  printf("\nMaior numero: %d\n", maior(l));
  printf("\nMenor numero: %d\n", menor(l));
  del(l, 0);
  del(l, 3);
  visualiza(l);
  destroi(l);
  /*Lista com ocupação circular*/
  ListaCircular* lc = criaLC();
  for(int i = 1; i <= 12; i++){
    addLC(lc, i * 16);
  }
  visualizaLC(lc);
  return 0;
}

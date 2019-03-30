#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

void checaValores(Lista* l, int visualiza){
  for(int i = l->inicio; i < l->fim; i++){
    if(l->itens[i] > l->maior){
      l->maior = l->itens[i];
    }else if(l->itens[i] <= l->menor){
      l->menor = l->itens[i];
    }
    if(visualiza == 1){
      printf("[%2d] %d\n", i, l->itens[i]);
    }
  }
}

Lista* cria(int lista[]){
  Lista* l = (Lista*)malloc(sizeof(Lista));
  if(l == NULL)
    printf("Erro na alocacao de memoria!\n");
  else {
    l->inicio = 0;
    l->fim = TAM;

    for(int i = l->inicio; i < l->fim; i++){
      l->itens[i] = lista[i];
    }

    checaValores(l, 0);
  }
  return l;
}

int add(Lista* l, int pos, int n){
  if(l == NULL) return 0;
  if(pos < l->inicio || pos > l->fim-1){
    printf("\nNao foi possivel adicionar um item nessa posicao!\n");
  }else {
    l->itens[pos] = n;
    checaValores(l, 0);
  }
  return 1;
}

int visualiza(Lista* l){
  if(l == NULL) return 0;
  printf("\nExibindo lista de valores: \n");
  checaValores(l, 1);
  printf("\n-----------------------------\n");
  return 1;
}

int maior(Lista* l){
  if(l == NULL) return 0;
  return l->maior;
}

int menor(Lista* l){
  if(l == NULL) return 0;
  return l->menor;
}

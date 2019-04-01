#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

/*Lista contiguidade física com descritor*/
void checaValores(Lista* l, int visualiza){
  l->menor = l->maior;
  for(int i = l->inicio; i < l->fim; i++){
    if(l->itens[i] > l->maior){
      l->maior = l->itens[i];
    }else if(l->itens[i] < l->menor){
      l->menor = l->itens[i];
    }
    if(visualiza == 1 && l->itens[i] != -1){
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

int del(Lista* l, int pos){
  if(l == NULL) return 0;
  add(l, pos, -1);
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

int destroi(Lista* l){
  if(l == NULL) return 0;
  free(l);
  return 1;
}

/*Lista com ocupação circular*/
ListaCircular* criaLC(){
  ListaCircular* lc = (ListaCircular*)malloc(sizeof(ListaCircular));
  if(lc == NULL){
    printf("Erro de alocacao de memoria!\n");
  }else {
    lc->num = -1;
    lc->prim = lc->prim;
    lc->prox = lc->prim;
  }
  return lc;
}
int addLC(ListaCircular* l, int n){
  if(l == NULL) return 0;
  ListaCircular* current = l;
  while(current->prox != NULL){
    current = current->prox;
  }
  current->prox = (ListaCircular*)malloc(sizeof(ListaCircular));
  current->prox->num = n;
  current->prox->prox = l->prim;
  return 1;
}

int visualizaLC(ListaCircular* l){
  if(l == NULL) return 0;
  ListaCircular* current = l;
  int id = -1;
  printf("\nExibindo valores da lista circular: \n");
  while(current->prox != NULL){
    id++;
    printf("[%2d] %d\n", id, current->prox->num);
    current = current->prox;
  }
  return 1;
}

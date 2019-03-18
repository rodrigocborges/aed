#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib.h"

Lista* define(size_t tam, int* val){
	Lista* l = (Lista*)malloc(sizeof(Lista));
	if(l != NULL){
		l->inicio = 0;
		l->fim = tam;
	}	
	for(int i = l->inicio; i < l->fim; i++){
		l->itens[i] = val[i];
	}
	return l;
}

void exibe(Lista* l){
	printf("\nExibindo valores da lista:\n");
	for(int i = l->inicio; i < l->fim; i++){		
		printf("[%d] %d\n", i, l->itens[i]);	
	}
	printf("\nValor inicial: %d | Valor final: %d | Tamanho: %d\n", l->itens[l->inicio], l->itens[l->fim - 1], l->fim);
}

void verifica(int n1, int n2, Lista* l){
	
}

int busca(int n, Lista* l){
	for(int i = l->inicio; i < l->fim; i++){
		if(l->itens[i] == n){
			printf("\nValor (%d) encontrado na posicao (%d)\n", n, i);
			return i;
		}
	}
	printf("\nValor (%d) referenciado nao encontrado!\n", n);
	return -1;
}

int apagar(int pos, Lista* l) {
	l->itens[pos] = -1;
	return 0;
}

void destroi(Lista* l){
	free(l);
}

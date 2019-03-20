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

void inserir(int pos, int n, Lista* l){
	if(pos >= TAM){
		printf("\nNao eh possivel adicionar mais elementos\n");
	}else {
		++l->fim;
		l->itens[l->fim - 1] = n;
		exibe(l);
	}
} //TODO: adiciona só no final, arrumar para add pela posicao

void alterar(int pos, int n, Lista* l){
	apagar(pos, l);
	l->itens[pos] = n;
	exibe(l);
}

int menorValor(Lista* l){
	int aux = maiorValor(l);
	for(int i = l->inicio; i < l->fim; i++){
		if(l->itens[i] <= aux)
			aux = l->itens[i];
	}
	return aux;
}

int maiorValor(Lista* l){
	int aux = 0;
	for(int i = l->inicio; i < l->fim; i++){
		if(l->itens[i] > aux)
			aux = l->itens[i];
	}
	return aux;
}

void exibe(Lista* l){
	printf("\n-------------Exibindo valores da lista-------------\n");
	for(int i = l->inicio; i < l->fim; i++){		
		printf("[%d] %d\n", i, l->itens[i]);	
	}
	printf("\nValor inicial: %d", l->itens[l->inicio]);
	printf("\nValor final: %d", l->itens[l->fim - 1]);
	printf("\nMenor: %d", menorValor(l));
	printf("\nMaior: %d\n", maiorValor(l));
	printf("\n----------------------------------------------------\n");
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
	if(pos < l->inicio || pos > l->fim - 1){
		printf("\nPosicao invalida, tente novamente!\n");
	}else {
		l->itens[pos] = -1;	
		printf("\nPosicao %d apagada!\n", pos);	
	}
	return 0;
}

void destroi(Lista* l){
	free(l);
}

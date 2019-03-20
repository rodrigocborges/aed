#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib.h"

Lista* define(size_t tam, int* val){
	Lista* l = (Lista*)malloc(sizeof(Lista));
	l->itens = (int*)malloc(tam * sizeof(int));
	if(l != NULL){
		l->inicio = 0;
		l->fim = tam;
	}	
	for(int i = l->inicio; i < l->fim; i++){
		l->itens[i] = val[i];
	}
	return l;
} //inicializa lista

void inserir(int n, Lista* l){
	++l->fim; //aumenta final da lista
	l->itens = (int*)realloc(l->itens, l->fim * sizeof(int));  //realoca memoria para caber mais numeros
	l->itens[l->fim - 1] = n;		
	exibe(l);
} //insere valor na ultima posicao

void alterar(int pos, int n, Lista* l){
	if(pos < l->inicio || pos > l->fim - 1){
		printf("\nPosicao invalida, tente novamente!\n");
	}else {
		l->itens[pos] = n;
		exibe(l);
	}
} //altera valor diretamente na posicao selecionada

int menorValor(Lista* l){
	int aux = maiorValor(l);
	for(int i = l->inicio; i < l->fim; i++){
		if(l->itens[i] <= aux)
			aux = l->itens[i];
	}
	return aux;
} //retorna menor valor da lista

int maiorValor(Lista* l){
	int aux = 0;
	for(int i = l->inicio; i < l->fim; i++){
		if(l->itens[i] > aux)
			aux = l->itens[i];
	}
	return aux;
} //retorna maior valor da lista

void exibe(Lista* l){
	printf("\n-------------Exibindo valores da lista-------------\n");
	for(int i = l->inicio; i < l->fim; i++){	
		if(l->itens[i] != -1)	
			printf("[%d] %d\n", i, l->itens[i]);	
	}
	printf("\nValor inicial: %d", l->itens[l->inicio]);
	printf("\nValor final: %d", l->itens[l->fim - 1]);
	printf("\nMenor: %d", menorValor(l));
	printf("\nMaior: %d\n", maiorValor(l));
	printf("\n----------------------------------------------------\n");
} //gera uma grid para mostrar todos os dados da lista

int busca(int n, Lista* l){
	for(int i = l->inicio; i < l->fim; i++){
		if(l->itens[i] == n){
			printf("\nValor (%d) encontrado na posicao (%d)\n", n, i);
			return i;
		}
	}
	printf("\nValor (%d) referenciado nao encontrado!\n", n);
	return -1;
} //busca determinado valor na lista e retorna sua posicao, caso houver algum erro retorna -1

int apagar(int pos, Lista* l) {
	if(pos < l->inicio || pos > l->fim - 1){
		printf("\nPosicao invalida, tente novamente!\n");
	}else {
		l->itens[pos] = -1;	
		printf("\nPosicao %d apagada!\n", pos);	
	}
	return 0;
} //apaga determinado valor indicando sua posicao

void destroi(Lista* l){
	free(l);
} //desaloca memoria

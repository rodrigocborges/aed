#include <stdio.h>
#include "lib.h"

/*
1. Implemente um algoritmo que receba dois valores (n1 e n2) e uma lista de valores inteiros como parâmetros de entrada. A lista deve ser atualizada inserindo o valor n2 após o nodo que contém o valor n1.
2. Especifique e implemente uma função que busque por um determinado valor em uma lista de números inteiros. A função deve retornar a posição do nodo que contém o valor buscado.
3. Construa um algoritmo que receba como parâmetros uma lista e um valor, valor este que representa a posição de um nodo na lista. O algoritmo deverá retornar as informações contidas neste nodo e a lista resultante da exclusão deste nodo. 
*/

int main(){
	int a[TAM] = {1,4,5,88,2,33,22,11,89,66};
	Lista* l = define(TAM, a);
	exibe(l); //exibe uma tabela com os indices e os valores respectivos da lista
	busca(888, l); //teste com valor inexistente na lista, retorna -1 pois nao encontrou
	busca(88, l); //teste com valor contido dentro da lista, retorna a posição do numero em questao
	apagar(6, l);
	destroi(l); //desaloca lista da memoria
	return 0;
}

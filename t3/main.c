#include <stdio.h>
#include "lib.h"

/*
TAREFA 3 
1. Implemente um algoritmo que receba dois valores (n1 e n2) e uma lista de valores inteiros como parâmetros de entrada. A lista deve ser atualizada inserindo o valor n2 após o nodo que contém o valor n1.
2. Especifique e implemente uma função que busque por um determinado valor em uma lista de números inteiros. A função deve retornar a posição do nodo que contém o valor buscado.
3. Construa um algoritmo que receba como parâmetros uma lista e um valor, valor este que representa a posição de um nodo na lista. O algoritmo deverá retornar as informações contidas neste nodo e a lista resultante da exclusão deste nodo. 

PARA COMPILAR: gcc main.c lib.c -o run
PARA EXECUTAR: ./run
*/

int main(){
	int a[TAM] = {99,4,5,88,2,33,22,11,89,66,43,15};
	Lista* l = define(TAM, a); //aloca memoria com o tamanho definido e insere os valores para dentro da estrutura
	exibe(l); //exibe uma tabela com os indices e os valores respectivos da lista
	busca(888, l); //teste com valor inexistente na lista, retorna -1 pois nao encontrou
	busca(88, l); //teste com valor contido dentro da lista, retorna a posição do numero em questao
	alterar(11, 785532, l); //altera valor na posição determinada pelo usuario, no caso o valor da pos 11 por 785532
	inserir(1998, l);
	inserir(2019, l);
	inserir(666, l);
	inserir(6565, l);
	inserir(23232, l);
	inserir(123456, l); //insere valor na lista sempre na ultima posicao
	destroi(l); //desaloca lista da memoria
	return 0;
}

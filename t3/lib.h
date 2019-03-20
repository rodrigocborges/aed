#define TAM 12

typedef struct lista {
	int inicio;
	int fim;
	int* itens;
} Lista;

Lista* define(size_t tam, int* val); //retorna lista de uma estrutura com tamanho e valores definidos pelo usuário

void inserir(int n, Lista* l);

void alterar(int pos, int n, Lista* l);  //altera valor especificando o indice 

void exibe(Lista* l); //exibe uma tabela de valores com indice e valores da lista 

int busca(int n, Lista* l); //retorna posicao de um valor especifico

void destroi(Lista* l); //desaloca memoria onde esta contida a lista

int maiorValor(Lista* l); //retorna maior valor contido na lista

int menorValor(Lista* l); //retorna menor valor contido na lista

int apagar(int pos, Lista* l); //excluir o valor na posição especificada e altera a lista


#define TAM 12 

typedef struct lista {
	int inicio;
	int fim;
	int itens[TAM];
} Lista;

Lista* define(size_t tam, int* val); //retorna lista de uma estrutura com tamanho e valores definidos pelo usuário

void inserir(int pos, int n, Lista* l);

void alterar(int pos, int n, Lista* l);

void exibe(Lista* l);

int busca(int n, Lista* l); 

void destroi(Lista* l);

int maiorValor(Lista* l);

int menorValor(Lista* l);

int apagar(int pos, Lista* l); //excluir o valor na posição especificada e altera a lista


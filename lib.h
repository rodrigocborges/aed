#define TAM 10 

typedef struct lista {
	int inicio;
	int fim;
	int itens[TAM];
} Lista;

typedef struct descritor{
	int inicioArranjo;
	int inicioLista;
	int numero;
	int fimLista;
	int fimArranjo;
	int menor;
	int maior;
} Descritor;

Lista* define(size_t tam, int* val); //retorna lista de uma estrutura com tamanho e valores definidos pelo usuário
void exibe(Lista* l);
int busca(int n, Lista* l); 
void destroi(Lista* l);

void verifica(int n1, int n2, Lista* l); 


int apagar(int pos, Lista* l); //excluir o valor na posição especificada e altera a lista

int buscaPorPos(int pos, int*lista); //retorna a informação contida na lista baseado na posicao especificada por parametro


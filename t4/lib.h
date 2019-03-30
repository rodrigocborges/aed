#define TAM 10

typedef struct {
  int itens[TAM];
  int maior;
  int menor;
  int inicio;
  int fim;
} Lista;

Lista* cria(int lista[]); //aloca memória para lista inserindo valores definidos por uma lista de inteiros

int add(Lista* l, int pos, int n); //adiciona um item numa determinada posiçãõ

int visualiza(Lista* l); //exibe uma grade mostrando todos valores contidos na lista

void checaValores(Lista* l, int visualiza); //função auxiliar para atualizar propriedades do descritor e caso visualiza seja 1 exibe a lista dos valores contido na lista

int maior(Lista* l); //função auxiliar para retornar o maior valor

int menor(Lista* l); //função auxiliar para retornar o menor valor

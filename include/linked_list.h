#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// ===== Estrutura de um nó da lista =====
struct Node {
    int conteudo;
    Node* proximo;
};

// ===== Estrutura da lista encadeada =====
struct ListaSimplesmenteEncadeada {
    int cardinalidade;
    Node* inicio;
};

// ===== Funções principais =====
ListaSimplesmenteEncadeada* criaLista();
void destroiLista(ListaSimplesmenteEncadeada &lista);
void insere(ListaSimplesmenteEncadeada &lista, int conteudo);

// ===== Funções adicionais =====
void mostraLista(const ListaSimplesmenteEncadeada &lista);
bool listaVazia(const ListaSimplesmenteEncadeada &lista);
int numElementos(const ListaSimplesmenteEncadeada &lista);
void inserePosicao(ListaSimplesmenteEncadeada &lista, int conteudo, int posicao);
void removePosicao(ListaSimplesmenteEncadeada &lista, int posicao);
void inverteLista(ListaSimplesmenteEncadeada &lista);

#endif

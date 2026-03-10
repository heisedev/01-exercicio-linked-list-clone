#include "linked_list.h"
#include <iostream>
#include <cstdlib>

using namespace std;

ListaSimplesmenteEncadeada* criaLista()
{
    ListaSimplesmenteEncadeada* lista = (ListaSimplesmenteEncadeada*) malloc(sizeof(ListaSimplesmenteEncadeada));
    lista->cardinalidade = 0;
    lista->inicio = NULL;
    return lista;
}

void destroiLista(ListaSimplesmenteEncadeada &lista)
{
    Node* temp;
    while (lista.inicio != NULL) {
        temp = lista.inicio;
        lista.inicio = lista.inicio->proximo;
        free(temp);
    }
    lista.cardinalidade = 0;
}

void insere(ListaSimplesmenteEncadeada &lista, int conteudo)
{
    Node* novoNode = (Node*) malloc(sizeof(Node));
    if (novoNode == NULL) {
        cerr << "Erro na alocação de memória" << endl;
    }

    novoNode->conteudo = conteudo;
    novoNode->proximo = lista.inicio;

    lista.inicio = novoNode;
    lista.cardinalidade++;
}

void mostraLista(const ListaSimplesmenteEncadeada &lista)
{
    Node* atual = lista.inicio;
    while (atual != NULL) {
        cout << "Conteudo: " << atual->conteudo << endl;
        atual = atual->proximo;
    }
}

bool listaVazia(const ListaSimplesmenteEncadeada &lista)
{
    return lista.cardinalidade == 0;
}

int numElementos(const ListaSimplesmenteEncadeada &lista)
{
    return lista.cardinalidade;
}

void inserePosicao(ListaSimplesmenteEncadeada &lista, int conteudo, int posicao)
{
    if (posicao < 0 || posicao > lista.cardinalidade) {
        cerr << "Posição inválida" << endl;
        return;
    }

    Node* novoNode = (Node*) malloc(sizeof(Node));
    novoNode->conteudo = conteudo;

    if (posicao == 0) {
        novoNode->proximo = lista.inicio;
        lista.inicio = novoNode;
    } else {
        Node* atual = lista.inicio;
        for (int i = 0; i < posicao - 1; i++) {
            atual = atual->proximo;
        }
        novoNode->proximo = atual->proximo;
        atual->proximo = novoNode;
    }
    lista.cardinalidade++;
}

void removePosicao(ListaSimplesmenteEncadeada &lista, int posicao)
{
    if (posicao < 0 || posicao >= lista.cardinalidade) {
        cerr << "Posição inválida" << endl;
        return;
    }

    Node* temp;
    if (posicao == 0) {
        temp = lista.inicio;
        lista.inicio = lista.inicio->proximo;
    } else {
        Node* atual = lista.inicio;
        for (int i = 0; i < posicao - 1; i++) {
            atual = atual->proximo;
        }
        temp = atual->proximo;
        atual->proximo = temp->proximo;
    }
    free(temp);
    lista.cardinalidade--;
}

void inverteLista(ListaSimplesmenteEncadeada &lista)
{
    Node* anterior = NULL;
    Node* atual = lista.inicio;
    Node* proximo = NULL;

    while (atual != NULL) {
        proximo = atual->proximo;
        atual->proximo = anterior;
        anterior = atual;
        atual = proximo;
    }
    lista.inicio = anterior;
}

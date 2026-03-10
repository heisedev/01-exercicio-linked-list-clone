#include <cassert>
#include <iostream>
#include "../include/linked_list.h"

using namespace std;

// ===== TESTES DA FUNÇÃO criaLista =====
void teste_criaLista() {
    cout << "Testando criaLista()..." << endl;

    ListaSimplesmenteEncadeada* lista = criaLista();
    assert(lista != NULL);
    assert(lista->cardinalidade == 0);
    assert(lista->inicio == NULL);

    free(lista);
    cout << "criaLista() passou em todos os testes" << endl;
}

// ===== TESTES DA FUNÇÃO insere (inserção no início) =====
void teste_insere() {
    cout << "Testando insere()..." << endl;

    ListaSimplesmenteEncadeada* lista = criaLista();

    insere(*lista, 10);
    insere(*lista, 20);
    insere(*lista, 30);

    assert(lista->cardinalidade == 3);
    assert(lista->inicio->conteudo == 30);
    assert(lista->inicio->proximo->conteudo == 20);
    assert(lista->inicio->proximo->proximo->conteudo == 10);

    destroiLista(*lista);
    free(lista);
    cout << "insere() passou em todos os testes" << endl;
}

// ===== TESTES DA FUNÇÃO destroiLista =====
void teste_destroiLista() {
    cout << "Testando destroiLista()..." << endl;

    ListaSimplesmenteEncadeada* lista = criaLista();
    insere(*lista, 1);
    insere(*lista, 2);
    insere(*lista, 3);

    destroiLista(*lista);

    assert(lista->cardinalidade == 0);
    assert(lista->inicio == NULL);

    free(lista);
    cout << "destroiLista() passou em todos os testes" << endl;
}

// ===== TESTES DA FUNÇÃO mostraLista =====
void teste_mostraLista() {
    cout << "Testando mostraLista()..." << endl;

    ListaSimplesmenteEncadeada* lista = criaLista();
    insere(*lista, 5);
    insere(*lista, 15);
    insere(*lista, 25);

    mostraLista(*lista); // Deve imprimir 25, 15, 5

    destroiLista(*lista);
    free(lista);
    cout << " mostraLista() passou em todos os testes" << endl;
}

// ===== TESTES DA FUNÇÃO listaVazia =====
void teste_listaVazia() {
    cout << "Testando listaVazia()..." << endl;

    ListaSimplesmenteEncadeada* lista = criaLista();
    assert(listaVazia(*lista) == true);

    insere(*lista, 42);
    assert(listaVazia(*lista) == false);

    destroiLista(*lista);
    free(lista);
    cout << " listaVazia() passou em todos os testes" << endl;
}

// ===== TESTES DA FUNÇÃO numElementos =====
void teste_numElementos() {
    cout << "Testando numElementos()..." << endl;

    ListaSimplesmenteEncadeada* lista = criaLista();
    insere(*lista, 1);
    insere(*lista, 2);
    insere(*lista, 3);

    assert(numElementos(*lista) == 3);

    destroiLista(*lista);
    free(lista);
    cout << "numElementos() passou em todos os testes" << endl;
}

// ===== TESTES DA FUNÇÃO inserePosicao =====
void teste_inserePosicao() {
    cout << "Testando inserePosicao()..." << endl;

    ListaSimplesmenteEncadeada* lista = criaLista();
    insere(*lista, 10);
    insere(*lista, 20);

    inserePosicao(*lista, 99, 1); // insere no meio
    assert(lista->cardinalidade == 3);
    assert(lista->inicio->conteudo == 20);
    assert(lista->inicio->proximo->conteudo == 99);
    assert(lista->inicio->proximo->proximo->conteudo == 10);

    destroiLista(*lista);
    free(lista);
    cout << "inserePosicao() passou em todos os testes" << endl;
}

// ===== TESTES DA FUNÇÃO removePosicao =====
void teste_removePosicao() {
    cout << "Testando removePosicao()..." << endl;

    ListaSimplesmenteEncadeada* lista = criaLista();
    insere(*lista, 1);
    insere(*lista, 2);
    insere(*lista, 3);

    removePosicao(*lista, 1); // remove o elemento do meio
    assert(lista->cardinalidade == 2);
    assert(lista->inicio->conteudo == 3);
    assert(lista->inicio->proximo->conteudo == 1);

    destroiLista(*lista);
    free(lista);
    cout << "removePosicao() passou em todos os testes" << endl;
}

// ===== TESTES DA FUNÇÃO inverteLista =====
void teste_inverteLista() {
    cout << "Testando inverteLista()..." << endl;

    ListaSimplesmenteEncadeada* lista = criaLista();
    insere(*lista, 10);
    insere(*lista, 20);
    insere(*lista, 30);

    inverteLista(*lista);

    assert(lista->inicio->conteudo == 10);
    assert(lista->inicio->proximo->conteudo == 20);
    assert(lista->inicio->proximo->proximo->conteudo == 30);

    destroiLista(*lista);
    free(lista);
    cout << "inverteLista() passou em todos os testes" << endl;
}

// ===== FUNÇÃO PRINCIPAL =====
int main() {
    cout << "\n=========================================" << endl;
    cout << "  INICIANDO TESTES DE LINKED LIST" << endl;
    cout << "=========================================" << endl << endl;
    teste_criaLista();
    teste_insere();
    teste_destroiLista();
    teste_mostraLista();
    teste_listaVazia();
    teste_numElementos();
    teste_inserePosicao();
    teste_removePosicao();
    teste_inverteLista();

    cout << "\n=========================================" << endl;
    cout << "   TODOS OS TESTES PASSARAM COM SUCESSO!" << endl;
    cout << "=========================================" << endl << endl;

    return 0;
}

#include <iostream>
#include "linked_list.h"

using namespace std;

int main() {
    cout << "Exercício de Linked List" << endl;
    cout << "----------------teste--------\n" << endl;

    return 0;
}


/*
Main de teste

#include "linked_list.h"
#include <iostream>

using namespace std;

int main() {
    // Criação da lista
    ListaSimplesmenteEncadeada* lista = criaLista();

    cout << "=== Teste de Lista Simplesmente Encadeada ===" << endl;

    // Inserção no início
    insere(*lista, 10);
    insere(*lista, 99);
    insere(*lista, 35);

    cout << "\n-- Lista inicial --" << endl;
    mostraLista(*lista);

    // Verificação de cardinalidade
    cout << "\nCardinalidade da lista: " << numElementos(*lista) << endl;

    // Inserção em posição específica
    cout << "\nInserindo 77 na posição 1..." << endl;
    inserePosicao(*lista, 77, 1);
    mostraLista(*lista);

    // Remoção em posição específica
    cout << "\nRemovendo elemento da posição 2..." << endl;
    removePosicao(*lista, 2);
    mostraLista(*lista);

    // Inversão da lista
    cout << "\n-- Lista invertida --" << endl;
    inverteLista(*lista);
    mostraLista(*lista);

    // Verificação se lista está vazia
    cout << "\nLista está vazia? " << (listaVazia(*lista) ? "Sim" : "Não") << endl;

    // Destruição da lista
    cout << "\nDestruindo lista..." << endl;
    destroiLista(*lista);
    cout << "Cardinalidade após destruir: " << numElementos(*lista) << endl;
    cout << "Lista está vazia? " << (listaVazia(*lista) ? "Sim" : "Não") << endl;

    free(lista); // liberar a estrutura principal
    return 0;
}
*/
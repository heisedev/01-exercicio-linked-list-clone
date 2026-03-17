01 - Lista Simplesmente Encadeada (Linked List)
Descrição
Exercício de implementação de uma Lista Simplesmente Encadeada em C++ com alocação dinâmica de memória.
O projeto contempla todas as operações básicas de manipulação de listas, incluindo inserção, remoção, inversão e liberação de memória.

Funcionalidades
[x] Criação/Inicialização: criar uma lista vazia
[x] Inserção: início da lista
[x] Liberar lista (destroi): liberar a memória da lista
[x] Mostrar lista: imprime os elementos da lista
[x] Lista Vazia: verifica se lista está vazia
[x] Número de Elementos: quantidade de elementos na lista
[x] Inserção: posição específica
[x] Remoção: elemento (node) de posição específica
[x] Inversão: inverter os elementos da lista

Pré-requisitos
Compilador C++ (g++ ou MSVC)

CMake (opcional, para build automatizado)

VSCode ou outro editor de texto (opcional)

Ferramentas de Desenvolvimento
Compilador: GCC/G++ ou MSVC

Debugger: GDB

Editor: Visual Studio Code (opcional)

Instalação
Clone o repositório:

bash
git clone https://github.com/<SEU_USUARIO>/<NOME_REPOSITORIO>
Certifique-se de ter g++ instalado em seu sistema.

Execução
Compilação Manual
Para compilar o projeto manualmente via terminal:

bash
g++ main.cpp src/linked_list.cpp -Iinclude -o main
./main
Depuração (Debugging)
Via VSCode
Abra a pasta do projeto no VSCode.

Coloque breakpoints no código.

Pressione F5 ou use a aba Run and Debug.

Via CLI (GDB)
bash
g++ -g main.cpp src/linked_list.cpp -Iinclude -o main
gdb ./main
Comandos básicos:

break main → adiciona breakpoint na função principal

run → executa o programa

next → próxima linha

print <variavel> → mostra valor da variável

Fluxo de Execução
Exemplo de saída:

Código
-- Lista inicial --
Conteúdo: 35
Conteúdo: 99
Conteúdo: 10

-- Lista invertida --
Conteúdo: 10
Conteúdo: 99
Conteúdo: 35

Cardinalidade da Lista: 3

Impressão da lista após remoção:
Conteúdo: 10
Conteúdo: 35

Lista após destruir: cardinalidade = 0
Fluxo de Testes
Para compilar e rodar os testes:

bash
g++ tests/tests.cpp src/linked_list.cpp -Iinclude -o tests_bin
./tests_bin
Saída esperada:

Código
=========================================
  INICIANDO TESTES DE LINKED LIST
=========================================

✓ criaLista() passou em todos os testes
✓ insere() passou em todos os testes
✓ listaVazia() passou em todos os testes
✓ numElementos() passou em todos os testes
✓ inserePosicao() passou em todos os testes
✓ removePosicao() passou em todos os testes
✓ inverteLista() passou em todos os testes
✓ destroiLista() passou em todos os testes

=========================================
  ✓ TODOS OS TESTES PASSARAM COM SUCESSO!
=========================================
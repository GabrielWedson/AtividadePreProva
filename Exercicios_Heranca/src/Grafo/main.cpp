#include "Grafo.hpp"
#include <iostream>

int main() {
    Grafo g;

    // Adicionando as arestas conforme o exemplo fornecido
    g.adicionarAresta(1, 2);
    g.adicionarAresta(1, 5);
    g.adicionarAresta(2, 1);
    g.adicionarAresta(2, 5);
    g.adicionarAresta(3, 2);
    g.adicionarAresta(3, 4);
    g.adicionarAresta(4, 2);
    g.adicionarAresta(4, 5);
    g.adicionarAresta(5, 1);
    g.adicionarAresta(5, 2);
    g.adicionarAresta(5, 4);

    g.exibirGrafo();

    // Verificando se os vértices são vizinhos
    std::cout << "Os vértices 1 e 2 são vizinhos? " << (g.saoVizinhos(1, 2) ? "Sim" : "Não") << "\n";
    std::cout << "Os vértices 1 e 3 são vizinhos? " << (g.saoVizinhos(1, 3) ? "Sim" : "Não") << "\n";

    // Listando os vizinhos de um dado vértice
    std::cout << "Vizinhos do vértice 2: ";
    for (int vizinho : g.obterVizinhos(2)) {
        std::cout << vizinho << " ";
    }
    std::cout << "\n";

    return 0;
}

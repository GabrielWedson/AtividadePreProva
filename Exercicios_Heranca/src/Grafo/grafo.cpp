#include "Grafo.hpp"

void Grafo::adicionarAresta(int v, int w) {
    listaAdjacencia[v].push_back(w);
    listaAdjacencia[w].push_back(v); // Como o grafo é não-direcionado, adiciona-se a aresta em ambas as listas de adjacência
}

bool Grafo::saoVizinhos(int v, int w) const {
    if (listaAdjacencia.find(v) == listaAdjacencia.end()) return false;
    for (int vizinho : listaAdjacencia.at(v)) {
        if (vizinho == w) return true;
    }
    return false;
}

std::vector<int> Grafo::obterVizinhos(int v) const {
    if (listaAdjacencia.find(v) == listaAdjacencia.end()) return {};
    return listaAdjacencia.at(v);
}

void Grafo::exibirGrafo() const {
    for (const auto& par : listaAdjacencia) {
        std::cout << "Vértice " << par.first << ": ";
        for (int vizinho : par.second) {
            std::cout << vizinho << " ";
        }
        std::cout << "\n";
    }
}

#ifndef GRAFO
#define GRAFO

#include <iostream>
#include <unordered_map>
#include <vector>

class Grafo {
private:
    std::unordered_map<int, std::vector<int>> listaAdjacencia;

public:
    void adicionarAresta(int v, int w);
    bool saoVizinhos(int v, int w) const;
    std::vector<int> obterVizinhos(int v) const;
    void exibirGrafo() const;
};

#endif // GRAFO_H

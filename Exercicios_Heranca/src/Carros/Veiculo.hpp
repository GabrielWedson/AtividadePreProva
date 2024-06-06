#ifndef VEICULO
#define VEICULO
#include <string>

#include <iostream>
#include <string>

class Veiculo {
protected:
    std::string marca;
    std::string modelo;
    int capacidade; // Capacidade de carga em toneladas

public:
    Veiculo(const std::string& marca, const std::string& modelo, int capacidade);
    virtual void exibirDados() const;
    virtual ~Veiculo() = default; // Destrutor virtual
};

#endif
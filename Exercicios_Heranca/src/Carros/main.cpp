#include <iostream>
#include <vector>
#include <memory>
#include "Veiculo.hpp"
#include "Caminhao.hpp"
#include "Van.hpp"

int main() {
    // Vetor de ponteiros para objetos do tipo Veiculo
    std::vector<std::unique_ptr<Veiculo>> frota;

    // Criando objetos Caminhao e Van e adicionando ao vetor
    frota.push_back(std::make_unique<Caminhao>("Volvo", "VMx", 18, 4));
    frota.push_back(std::make_unique<Van>("Fiat", "Ducato", 1, 12));
    frota.push_back(std::make_unique<Caminhao>("RAM", "Dodge", 25, 3));
    frota.push_back(std::make_unique<Van>("Renault", "Kwid", 1, 15));

    // Exibindo dados dos veículos
    for (const auto& veiculo : frota) {
        veiculo->exibirDados();
        std::cout << "\n";
    }

    return 0;
}

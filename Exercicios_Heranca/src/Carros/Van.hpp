#ifndef VAN
#define VAN

#include "Veiculo.hpp"

class Van : public Veiculo {
private:
    int passageiros;

public:
    Van(const std::string& marca, const std::string& modelo, int capacidade, int passageiros);
    void exibirDados() const override;
};

#endif 

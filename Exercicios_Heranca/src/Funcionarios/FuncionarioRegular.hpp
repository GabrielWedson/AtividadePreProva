#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR
#include "Funcionario.hpp"
class FuncionarioRegular : public Funcionario
{
private:
public:
    FuncionarioRegular(string nome, int id, double salarioBase);
    double calcularSalarioTotal();
};

#endif
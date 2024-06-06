#ifndef ESTAGIARIO
#define ESTAGIARIO

#include "Funcionario.hpp"
class Estagiario : public Funcionario
{
private:
public:
    Estagiario(string nome, int id, double salarioBase);
    double calcularSalarioTotal();
};

#endif
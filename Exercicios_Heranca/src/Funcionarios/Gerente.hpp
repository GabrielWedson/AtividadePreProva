#ifndef GERENTE
#define GERENTE
#include "Funcionario.hpp"
class Gerente : public Funcionario
{
private:
    int BonusAnual;

public:
    Gerente(string nome, int id, double salarioBase, int BonusAnual);
    double calcularSalarioTotal();
};

#endif
#include "Gerente.hpp"

Gerente::Gerente(string nome, int id, double salarioBase, int BonusAnual) : Funcionario(nome, id, salarioBase), BonusAnual(BonusAnual)
{
}

double Gerente::calcularSalarioTotal()
 {
    return salarioBase+BonusAnual;
 }
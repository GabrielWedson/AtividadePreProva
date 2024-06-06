#include "Estagiario.hpp"

Estagiario::Estagiario(string nome, int id, double salarioBase) : Funcionario(nome, id, salarioBase)
{
}

double Estagiario::calcularSalarioTotal()
 {
    return salarioBase/2;
 }
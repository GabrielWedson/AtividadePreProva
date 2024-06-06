#include <iostream>
#include "Funcionario.hpp"
#include "FuncionarioRegular.hpp"
#include "Gerente.hpp"
#include "Estagiario.hpp"
using std::cout;
using std::endl;
int main() {
    Gerente* gerente = new Gerente("Rodrigao",23,10000,3000);
    FuncionarioRegular* funcionario = new FuncionarioRegular("Jorge",12,5000);
    Estagiario* estagiario = new Estagiario("Caio",01,2000);
    FuncionarioRegular* funcionario2 = new FuncionarioRegular("Lucas",124,3400);



      cout << gerente->calcularSalarioTotal() << endl;
      cout << funcionario->calcularSalarioTotal() << endl;
      cout << funcionario2->calcularSalarioTotal() << endl;
      cout << estagiario->calcularSalarioTotal() << endl;

}
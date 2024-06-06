#ifndef FUNCIONARIO
#define FUNCIONARIO
#include <string>

using std::string;
class Funcionario
{
private:
    int id;
    string nome;

protected:
    double salarioBase;

public:
    Funcionario(string nome, int id, double salarioBase);
    virtual double calcularSalarioTotal();
};
#endif
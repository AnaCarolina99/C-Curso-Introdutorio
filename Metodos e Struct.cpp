#include <iostream>

using namespace std;

struct Pessoa
{
    string nome;
    string sobrenome;
    int idade;
    string cpf;

};


void selena(){
    cout<< "ola mundo" << endl;
}

int main(){
    Pessoa p;
    p.nome = "Pau no cu";
    p.sobrenome = "Minatozaki";
    p.idade = 21;
    p.cpf = "149.623.886-90";
    selena();
    cout << p.nome << endl;
}

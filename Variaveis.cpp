#include <iostream>

using namespace std;

int main(){
    int num = 10;
    int num2 = 500;
    int selena = 0;
    int sana = 0;
    string sel("Sana Banana");
    // endl = pular linha
    cout << num + num2<< endl;
    char c = 'A';
    cout << "O char eh "<< c << " caracteres"<< endl;
    cout << "Digite o 1 numero"<< endl;
    cin >> selena; 
    cout << "Digite o 2 numero"<< endl;
    cin >> sana;
    cout << "Adicao: "<< selena + sana<< endl;
    cout << "Subtracao: "<<selena - sana<< endl;
    cout << "Multiplicacao: "<<selena * sana<< endl;
    cout << "Divisao: "<<selena / sana<< endl;
    cout << "Resto: "<<selena % sana<< endl;
    cout << sel<< endl;
    return 0;
}
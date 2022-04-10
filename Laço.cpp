#include <iostream>

using namespace std;

int main(){
    for(int i = 0; i<=10;i++){
        cout << i << endl;
    }
    int a = 0;
    cout << "Digite o numero para a tabuada ";
    cin >> a;
    for (size_t i = 1; i <= 10; i++)
    {
        cout << a * i << endl;
    }
    
}
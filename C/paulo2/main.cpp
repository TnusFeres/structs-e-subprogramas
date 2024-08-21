#include <iostream>
using namespace std;


int maior(int a, int b, int c) {
    int maior_valor = a;
    if (b > maior_valor) maior_valor = b;
    if (c > maior_valor) maior_valor = c;
    return maior_valor;
}

int main() {
    int x, y, z;


    cout << "Informe 3 valores: ";
    cin >> x >> y >> z;


    int resultado = maior(x, y, z);


    cout << "O maior valor é: " << resultado << endl;

    return 0;
}

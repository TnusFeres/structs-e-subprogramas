
#include <iostream>
using namespace std;

int idadeEmDias(int anos, int meses, int dias) {
    return (anos * 365) + (meses * 30) + dias;
}

int main() {
    int anos, meses, dias;

    cout << "Informe a idade em anos: ";
    cin >> anos;
    cout << "Informe a idade em meses: ";
    cin >> meses;
    cout << "Informe a idade em dias: ";
    cin >> dias;

    int idade_total = idadeEmDias(anos, meses, dias);
    cout << "A idade expressa em dias é: " << idade_total << " dias" << endl;

    return 0;
}

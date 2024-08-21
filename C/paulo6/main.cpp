#include <iostream>
using namespace std;

double pesoIdeal(double altura, string sexo) {
    if (sexo == "masculino") {
        return 72.7 * altura - 58;
    } else if (sexo == "feminino") {
        return 62.1 * altura - 44.7;
    } else {
        cout << "Sexo inválido. Use 'masculino' ou 'feminino'." << endl;
        return 0;
    }
}

int main() {
    double altura;
    string sexo;

    cout << "Informe a altura: ";
    cin >> altura;
    cout << "Informe o sexo (masculino/feminino): ";
    cin >> sexo;

    double peso = pesoIdeal(altura, sexo);
    if (peso != 0) {
        cout << "O peso ideal é: " << peso << " kg" << endl;
    }

    return 0;
}

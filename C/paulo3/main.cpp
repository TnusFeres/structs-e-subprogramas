
#include <iostream>
using namespace std;


int calcularAnos() {
    double populacao_a = 90000000;
    double populacao_b = 200000000;
    int anos = 0;

    while (populacao_a <= populacao_b) {
        populacao_a += populacao_a * 0.03;
        populacao_b += populacao_b * 0.015;
        anos++;
    }

    return anos;
}

int main() {

    int anos = calcularAnos();


    cout << "N�mero de anos necess�rios para que a popula��o de 'a' ultrapasse ou iguale 'b': " << anos << " anos." << endl;

    return 0;
}

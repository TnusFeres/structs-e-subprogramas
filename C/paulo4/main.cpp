#include <iostream>
using namespace std;


double fahrenheitParaCelsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {

    cout << "Tabela de Conversão de Fahrenheit para Celsius:" << endl;
    for (int fahrenheit = 0; fahrenheit <= 100; fahrenheit++) {
        double celsius = fahrenheitParaCelsius(fahrenheit);
        cout << fahrenheit << "°F = " << celsius << "°C" << endl;
    }

    return 0;
}

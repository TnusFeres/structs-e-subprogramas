#include <iostream>
#include <string>
using namespace std;

#define MAX_ALUNOS 50


struct Aluno {
    int matricula;
    string nome;
};

int main() {
    Aluno alunos[MAX_ALUNOS];
    int n;


    cout << "Informe a quantidade de alunos (máximo 50): ";
    cin >> n;


    if (n > MAX_ALUNOS) {
        cout << "Número de alunos ultrapassa o limite de 50." << endl;
        return 1;
    }


    for (int i = 0; i < n; i++) {
        cout << "Aluno " << i + 1 << endl;
        cout << "Matrícula: ";
        cin >> alunos[i].matricula;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, alunos[i].nome);
    }


    cout << "\nLista de Alunos:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Matrícula: " << alunos[i].matricula << ", Nome: " << alunos[i].nome << endl;
    }

    return 0;
}


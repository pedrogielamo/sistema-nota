#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
                // ENTRADA(declarando variaveis)
    string nomes[20];
    int qtdAlunos;
    float notas[20][5];
    float media [20];
    int qtdDisciplinas;
                // PROCESSAMENTO
    cout<<"=== SISTEMAS DE NOTAS v4.0 ==="<<endl;
    do{
        cout<<"Quantidade de alunos(1-20): " ;
        cin >> qtdAlunos;
    }   while (qtdAlunos < 1 || qtdAlunos > 20 );
    cin.ignore();
    
        for (int i = 0; i <qtdAlunos; i++) {
            cout << "Nome do aluno " << i + 1 << ":";
            getline(cin, nomes[i]);
        }
    do{
         cout<<"\nQuantidade de discplinas(1-5): ";
        cin >> qtdDisciplinas;
     } while (qtdDisciplinas < 1 || qtdDisciplinas > 5);
     for (int i = 0; i < qtdAlunos; i ++){
        cout <<"\n Notas de " << nomes[i] << ":" << endl;
        float soma = 0;
        for (int j = 0; j < qtdDisciplinas; j ++){
            do{
                cout << "Disciplina " << j + 1 << "(1 a 5): ";
                cin >> notas[i][j];
            } while(notas[i][j] < 1 || notas[i][j] > 5);
            soma += notas[i][j];
        }
        media[i] = soma / qtdDisciplinas;
     }  

                // SAIDA
    cout<<"\n Alunos cadastrados: " << endl;
         for (int i = 0; i <qtdAlunos; i++) {
            cout<< "  " << i + 1 << ". " << nomes[i] << endl;
         }          

    return 0;
}
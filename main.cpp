#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    string nomes[20];
    int qtdAlunos;
    float notas[20][5];
    float media [20];
    int qtdDisciplinas;
    
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
                cout << "Disciplina " << j + 1 << "(0 a 10): ";
                cin >> notas[i][j];
            } while(notas[i][j] < 0 || notas[i][j] > 10);
            soma += notas[i][j];
        }
        media[i] = soma / qtdDisciplinas;
     }  

    cout<<"\n Alunos cadastrados: " << endl;
         for (int i = 0; i <qtdAlunos; i++) {
            cout<< "  " << i + 1 << ". " << nomes[i] << endl;
         }    
         cout <<"\n=== RELATÓRIO === " << endl;
         int aprovados = 0, recuperacao = 0, reprovado = 0;
            for(int i = 0; i < qtdAlunos; i ++){
            cout << nomes[i] << " - media: " << media[i] << endl; " - ";
            if(media[i] >= 7){
                cout<<"Aprovado" << endl;
            aprovados++;
             } else if (media[i]>=5){
                cout<<"Recuperação" << endl;
                recuperacao++;
             } else{
                cout<<"Reprovado"<< endl;
                reprovado++;
             }
            }
            cout<<"\nResumo: " << aprovados << " aprovados, " << recuperacao << " em recuperação, " << reprovado << " reprovados" << endl;
            
             

    return 0;
}
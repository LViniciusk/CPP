#include <iostream>
#include <iomanip>
using namespace std;

struct Aluno{
    char nome[100];
    int mat;
    char disciplina[120];
    double nota;
    
    void ler(){
        cin.getline(nome, 100);
        cin >> mat;
        cin.ignore();
        cin.getline(disciplina, 120);
        cin >> nota;
        cin.ignore();
    }
    
    void verifica(){
        
        if(nota >= 7){
            cout << nome << " aprovado(a) em " << disciplina << endl;
        }else{
            cout << nome << " reprovado(a) em " << disciplina << endl;
        }
    
    
}
    
};






int main(){
    
    Aluno al;
    al.ler();
    al.verifica();
    
    
    
    return 0;
}
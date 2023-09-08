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
    
};

void compara(Aluno al1, Aluno al2){
    
    if(al1.nota == al2.nota){
        //empate
        cout << al1.nome << " e " << al2.nome << " , " << fixed <<  setprecision(1) << al1.nota << endl;
        
        
        return;
    }
    
    if(al1.nota > al2.nota){
        //aluno1
        cout << al1.nome << " , " << fixed <<  setprecision(1) << al1.nota << endl;
    }else{
        //aluno2
        cout << al2.nome << " , " << fixed <<  setprecision(1) << al2.nota << endl;
    }
}




int main(){
    
    Aluno al1, al2;
    al1.ler();
    al2.ler();
    
    compara(al1, al2);
    
    
    
    return 0;
}
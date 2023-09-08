#include <iostream>
#include <iomanip>
using namespace std;

struct Aluno{
    
    int mat;
    char nome[100];
    double media;
    
    void ler(){
        cin >> mat;
        cin.ignore();
        cin.getline(nome, 100);
        cin >> media;
        cin.ignore();
    }
    
    
    
};

void verifica(Aluno aluno[], int n, int m){
        for(int i = 0; i < n; i++){
            if(aluno[i].mat == m){
                cout << aluno[i].nome << "\n" << fixed << setprecision(1) << aluno[i].media << endl;
                return;
            }
        }
        cout << "NAO ENCONTRADA" << endl;
        
    
    
}






int main(){
    int n, mat; cin >> n;
    Aluno aluno[n];
    
    for(int i = 0; i < n; i++){aluno[i].ler(); }
    cin >> mat;
    
    verifica(aluno, n, mat);
    
    
    
    return 0;
}
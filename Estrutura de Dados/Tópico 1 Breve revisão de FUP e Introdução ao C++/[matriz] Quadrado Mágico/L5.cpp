#include <iostream>

using namespace std;

int main(){
    
    int n = 3;
    int mat[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }   
    }
    int soma = 0;
    int aux = 0;
    for(int i = 0; i < n; i++){
        soma += mat[0][i];
    }
    int somaL = 0;
    int somaC = 0;
    int somaD1 = 0;
    int somaD2 = 0;
    
    for(int i = 0; i < n; i++){
        somaD1 += mat[i][i];
        somaD2 += mat[i][n-1-i];
    }
    for (int i = 0; i < n; ++i) {
        somaL = 0, somaC = 0;
        
        for (int j = 0; j < n; ++j) {
            somaL += mat[i][j];
            somaC += mat[j][i];
        }
        

        if (somaL != soma || somaC != soma || somaD1 != soma) {
            break;
        }
    }
    
    //cout << soma << " " << somaL << " " << somaC << " " << somaD1 << " " << somaD2 << endl;
    if (somaL != soma || somaC != soma || somaD1 != soma) aux = 1;
    else aux = 0;
    
    if(aux == 1){
        cout << "nao";
    }else{
        cout << "sim";
    }
    
    
    
    return 0;
}
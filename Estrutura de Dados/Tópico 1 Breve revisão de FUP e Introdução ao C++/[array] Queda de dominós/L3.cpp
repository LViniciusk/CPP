#include <iostream>

using namespace std;


int ordenado(int alt[], int tam){
    int aux = 0;
    
    if(tam == 1) {
        cout << "ok";
        return 0;
    }
    
    for(int i = 0; i < tam; i++){
        if(alt[i] > alt[i+1] && i < tam -1){
            cout << "precisa de ajuste";
            aux = 1;
            break;
        }
    }
    if(aux == 0) cout << "ok";
    return 0;
}



int main(){
    
    int n; cin >> n;
   int alt[n];
    for(int i = 0; i<n;i++){
        cin>> alt[i];
    }
    
    ordenado(alt, n);
    
    
    return 0;
}
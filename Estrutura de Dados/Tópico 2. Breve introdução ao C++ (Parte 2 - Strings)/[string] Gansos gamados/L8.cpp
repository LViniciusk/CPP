#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
int main(){
    char texto[100]; cin.getline(texto, 100);
    istringstream iss;
    iss.str(texto);
    string vetor[20], p;
    int aux = 0, aux2 = 0;
    while(iss >> p){
        vetor[aux] = p;
        aux++;
    }
    for(int i = 0; i< aux-1; i++){
        if(vetor[i] > vetor[i+1]) aux2++;
    }
     if(aux2 !=0) cout << "nao";
     else cout << "sim";
    return 0;
}
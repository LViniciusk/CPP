#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
int main(){
    char texto[100]; cin.getline(texto, 100);
    istringstream iss(texto); string p;
    string vetor[20];
    int aux = 0;
    while(iss >> p){
        vetor[aux] = p;
        aux++;
    }
    
    for (int it = 0; it<aux; it++){
        istringstream iss(vetor[it]);
        int i;
        double d;
        char c;
        iss.clear();
        iss >> i;
        if(!iss.fail()  && iss.eof()) cout << "int";
        iss.clear();
        iss >> d;
        if(!iss.fail() && iss.eof()) cout << "float";
        iss.clear();
        iss >> c;
        if(!iss.fail()) cout << "str";
        iss.clear();
        if(it < aux-1) cout << " ";
    }
    return 0;
}
#include <iostream>
#include <cstring>
#include <cctype>
#include <sstream>
using namespace std;
bool isVogal(char letra){
    switch((char) tolower(letra)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}
int main(){
    char texto[100]; cin.getline(texto, 100); string p;
    istringstream iss(texto), iss2(texto);
    int aux = 0, aux2 = 0;
    while (iss2 >> p){
        aux2++;
    }
    while (iss >> p){
        for(int i = 0; i < p.size()-1; i++){
            if(isVogal(p[i]) && !(isVogal(p[i+1]))){
                cout << p.substr(0, i+1) << p.substr(0, i+1);
                break;
            } 
        }
        aux++;
        cout << p;
        if(aux < aux2) cout << " ";
    }
    return 0;
}
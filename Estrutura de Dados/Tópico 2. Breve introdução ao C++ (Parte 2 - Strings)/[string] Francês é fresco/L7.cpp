#include <iostream>
#include <cstring>

using namespace std;



bool isVogal(char letra){
    switch (letra){
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
    
    char texto[100];
    cin.getline(texto, 100);
    
    for(int i = 0; i < strlen(texto); i++){
        cout << texto[i];
        if(isVogal(texto[i]) && texto[i+1] == ' ' && texto[i+2] == texto[i]){
            i+=2;
            if(isVogal(texto[i]) && texto[i+1] == ' ' && texto[i+2] == texto[i]){
                i+=2;
        }
        }
        
    }
    
    
    
    
    return 0;
}
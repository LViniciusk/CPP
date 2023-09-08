#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    
    char texto[100], op;
    
    cin.getline(texto, 100); cin >> op;
    
    switch(op){
        case 'M':
            for(int i = 0; i < strlen(texto); i++){
                cout << (char) toupper(texto[i]);
            }
            break;
        
        case 'm':
            for(int i = 0; i < strlen(texto); i++){
                cout << (char) tolower(texto[i]);
            }
            break;
        
        case 'p':
            for(int i = 0; i < strlen(texto); i++){
                if(texto[i-1] == ' ' && texto [i+1] != ' ')
                    cout << (char) toupper(texto[i]);
                else
                    cout << (char) tolower(texto[i]);
            }
            break;
            
        
        case 'i':
            for(int i = 0; i < strlen(texto); i++){
                if(texto[i] == toupper(texto[i]))
                    cout << (char) tolower(texto[i]);
                else
                    cout << (char) toupper(texto[i]);
            }
            break;
        
        default:
        break;
    }
    
    
    
    
    return 0;
}
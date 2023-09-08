#include <iostream>

using namespace std;

int main(){
    int n = 3, c = 0;
    int mat[n][n];
    
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin >> mat[i][j];
        }   
    }
    
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(mat[i][j] > mat[i+1][j] && i <n-1) c++;
        }   
    }
    
    cout << c << endl;
    
    
    
    return 0;
}
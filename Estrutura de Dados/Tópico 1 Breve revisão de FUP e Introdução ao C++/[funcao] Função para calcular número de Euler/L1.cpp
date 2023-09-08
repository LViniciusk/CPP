#include <iostream>

using namespace std;


double fatorial(int n){
    double result = n;
    if(n == 1) return 1;
    else{
        result *= fatorial(n-1);
    }
    
    
    return result;
}

int main(){
    
    double res = 1;
    int n; cin >> n;
    
    for(int i = n; i > 0;i--){
        res += 1/fatorial(i);
    }
    
    cout << fixed << res;
    
    
    
    return 0;
}
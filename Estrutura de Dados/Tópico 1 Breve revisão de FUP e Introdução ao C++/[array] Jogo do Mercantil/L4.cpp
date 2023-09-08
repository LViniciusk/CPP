#include <iostream>

using namespace std;




int main(){
    
    int pri = 0, seg = 0;
    int n; cin >> n;
    float p[n]; for(int i = 0; i < n; i++){cin >> p[i];}
    float c[n]; for(int i = 0; i < n; i++){cin >> c[i];}
    char e[n]; for(int i = 0; i < n; i++){cin >> e[i];}
    
    for(int i = 0; i<n; i++){
        if(c[i] == p[i]) pri++;
        else{
            if((c[i] < p[i] && e[i] == 'm') || 
            (c[i] > p[i] && e[i] == 'M')) pri++;
            
            else if((c[i] < p[i] && e[i] == 'M') || 
            (c[i] > p[i] && e[i] == 'm')) seg++;
        }
    }
    if(pri > seg) cout << "primeiro";
    else if (pri < seg ) cout << "segundo";
    else cout << "empate";
    
    
    
    return 0;
}
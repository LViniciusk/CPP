#include <iostream>
using namespace std;
int primo(int n){
    if (n <= 1) {
        return 0;
    }else{
        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                return 0;       
            }
        }
    }
    cout << n << endl;
    return 0;
}
int main(){
    unsigned int A, B; cin >> A >> B;
    for(int i = A; i <= B; i++){
        primo(i);
    }
    return 0;
}
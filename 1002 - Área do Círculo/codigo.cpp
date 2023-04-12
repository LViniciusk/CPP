#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double R, N = 3.14159, A; 
    
    cin >> R;
    
    A = (R*R) * N;
    
    cout << fixed << setprecision(4) << "A=" << A << endl;

}
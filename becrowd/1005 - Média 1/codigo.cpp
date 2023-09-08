#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double n1,n2, media;
    
    cin >> n1 >> n2;
    
    media = ((n1 * 3.5) + (n2 * 7.5)) /11;
    
    cout << fixed << setprecision(5) << "MEDIA = " << media << endl;

}
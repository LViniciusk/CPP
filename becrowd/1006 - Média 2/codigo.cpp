#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double n1,n2, n3, media;
    
    cin >> n1 >> n2 >> n3;
    
    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) /10;
    
    cout << fixed << setprecision(1) << "MEDIA = " << media << endl;

}
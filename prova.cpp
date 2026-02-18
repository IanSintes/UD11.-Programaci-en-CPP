#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x,y;
    cout << "Escriure dos nombres, separats per intro.\n";
    cin>>x;
    cin>>y;
    int z = pow(x,y);
    cout << z << endl;
    return 0;
}
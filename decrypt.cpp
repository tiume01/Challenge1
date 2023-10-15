#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input = "vF34j4q6";  // stringa da decifrare 
    vector <int> v = {15, 22, 3, -48, 0, 4, 15, 21}; //numeri convertiti da hexa a decimali nell'array inizializzato dal prof
    for (int i = 0; i < input.length(); i++) {
        input.at(i) -= v.at(i);
    }
    cout << "La stringa risultante è: " << input << endl;
    return 0;
}

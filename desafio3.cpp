#include <iostream>

using namespace std;

int main() {
    int soma =  0;

    for(int k = 1; k < 12; k++) {
        k = k + 1;
        soma = soma + k;
    }

    cout << soma << endl;

    return 0;
}
#include <iostream>

using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;
    bool isPresent = false;

    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";

        if(c == n) isPresent = true;

        a = b;
        b = c;
    }

    if(isPresent) {
        cout << "\nO número informado pertence a sequência de Fibonacci.";
    } else {
        cout << "\nO número informado não pertence a sequência de Fibonacci.";
    }

}

int main() {
    int num;
    cout << "Fibonacci de: ";
    cin >> num;

    fibonacci(num);
    return 0;
}
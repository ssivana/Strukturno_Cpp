//
// Created by Ivana Stojkoska on 2.5.2026.
//

#include <iostream>
using namespace std;

int main() {
    int op1, op2, res;
    char operators;
    cin >> op1 >> operators >> op2;
    switch (operators) {
        case '+':
            res = op1 + op2;
            break;
        case '-':
            res = op1 - op2;
            break;

        case '*':
            res = op1 * op2;
            break;
        case '/':
            if (op2 == 0) {
                cout << "Division with 0 is prohibited!";
            }
            res = op1 / op2;
            break;
            default:
            cout << "Invalid operator" ;
            return 1;
    }

    cout << op1 << " " << operators << " " << op2 << " = " << res;

    return 0;
}

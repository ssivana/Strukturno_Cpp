//
// Created by Ivana Stojkoska on 1.5.2026.
//

#include <iostream>
using namespace std;


// Да се напише програма што од непознат број на цели броеви кои се
// внесуваат од тастатура ќе ги определи позициите (редните броеви на внесување)
// на двата последователни броја што ја имаат најголемата сума. Програмата завршува ако едно по друго
// (последователно) се внесат два негативни цели броја.
int main() {
    int prev, curr, pos = 2, pos1 = 1, pos2 = 2;
    int sum, max_sum;

    cin >> prev >> curr;

    sum = prev + curr;
    max_sum = sum;

    while (true) {
        if (prev < 0 && curr < 0) {
           break;
        }
        sum = prev + curr;
        if (sum > max_sum) {
            max_sum = sum;
            pos1 = pos - 1;
            pos2 = pos;

        }
        prev = curr;
        cin >> curr;
        pos++;
    }

    cout << "The biggest sum is: " << max_sum << ", and the positions of the two numbers is: " << pos1 << " and " <<pos2;

    return 0;
}

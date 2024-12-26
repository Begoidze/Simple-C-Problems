/*
 * File: Combinations.cpp
 * ----------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the Combinations problem.
 * [TODO: rewrite the documentation]
 */

#include <iostream>
#include "console.h"
using namespace std;

//Returns 0 and 1 in easy cases, if it's harder uses the formula, until i'ts the easy case.
int combinations(int n, int k) {
    if (n == 0 && k == 0) {
        return 1;
    }
    else if (n == 1 && k == 0) {
        return 1;
    }
    
    else if (n == 0 && k != 1) {
        return 0;
    }
    else if (k > n) {
        return 0;
    }
    else {
       
        return combinations(n - 1, k - 1) + combinations(n - 1, k);
    }
}

int main() {
    cout << combinations(5, 0) << endl;
    return 0;
}

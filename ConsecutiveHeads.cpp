/*
 * File: ConsecutiveHeads.cpp
 * --------------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the Consecutive Heads problem.
 * [TODO: rewrite the documentation]
 */

#include <iostream>
#include "random.h"
#include "console.h"

using namespace std;

//Using it for counting heads.
int cntr = 0; 
//Using for printing heads and tails.
string h = "heads";
string t = "tails";
//Using for counting all the attempts.
int cntF = 0;
bool headChance;

int main() {
    while (cntr != 3) {

        headChance = randomChance(0.5);
       
        if (headChance) {
            cout << h << endl;
            cntr++;
            cntF++;
        }
        else {
            cout << t << endl;
            cntr = 0;
            cntF++;
        }
    }
    //Prints the results.
    cout << "It took " << cntF << " flips to get 3 consecutive heads" << endl;
    return 0;
}

/*
 * File: NumericConversions.cpp
 * ---------------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the Numeric Conversions problem.
 * [TODO: rewrite the documentation]
 */

#include <iostream>
#include <string>
#include "console.h"
using namespace std;

//Using to check if something changed or not.
int m = -1;

/* Function prototypes */



string intToString(int n) {

    if (m == -1 && n == 0) {
        return "0";
    }

    if (n == 0) {
        return "";
    }
    else {
        if (n < 0) {
            n = n * (- 1);
            return "-" + intToString(n);
        }
        m = n % 10;
        n = n / 10;
        char lastChar = char(m + '0');
        
        //cout << char(0) << endl;
        return intToString(n) + lastChar;
    }

    
  
}

int b = 1;


int stringToInt(string str) {

    if (str.length() == 0) {
        return 0;
    }
    else {
        


            b = b * 10;
            int a = (char(str[str.length() - 1]) - char('0')) * b / 10;
            str = str.substr(0, str.length() - 1);


            if (str[0] != '-') {
                return stringToInt(str) + a;
            }else{
                str = str.substr(1, str.length());
                return -1 * (stringToInt(str) + a);
            }
        
    }


    return 0;
}

/* Main program */

int main() {

    cout << intToString(12345) << endl;
    cout << stringToInt("12345") << endl;

    return 0;
}

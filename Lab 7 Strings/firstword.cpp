#include <iostream>
#include <math.h>
#include <string>

using namespace std;

string firstword(string s) {
    string res;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            res += s[i];
        }
        else {
            break;
        }
    }
    return res;
}

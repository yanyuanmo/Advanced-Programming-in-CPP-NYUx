#include <iostream>
#include <math.h>
#include <string>

using namespace std;

string remainingwords(string s) {
    string res;
    bool start=false;
    for (int i = 0; i < s.length(); i++) {
        if (start) {
            res += s[i];
        }
        else {
            if (s[i] == ' ') {
                start = true;
            }
        }
    }
    return res;
}

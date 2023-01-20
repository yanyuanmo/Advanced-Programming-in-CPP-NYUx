#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter an odd length string: ";
    getline(cin, s);
    char middle = s[s.length()/2];
    cout << "Middle character: " << middle << endl;
    string before, after;
    for (int i = 0; i < s.length()/2; i++) {
        before += s[i];
    }
    for (int i = s.length()/2+1; i < s.length(); i++) {
        after += s[i];
    }
    cout << "First half: " << before << endl;
    cout << "Second half: " << after << endl;
}

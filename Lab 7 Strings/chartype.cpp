#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (islower(c)) {
        printf("%c is a lower case letter.", c);
    }
    else if (isupper(c)) {
        printf("%c is an upper case letter.", c);
    }
    else if (isalnum(c)) {
        printf("%c is a digit.", c);
    }
    else {
        printf("%c is a non-alphanumeric character.");
    }
}

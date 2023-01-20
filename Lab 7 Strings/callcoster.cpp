#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
    float duration;
    int time;
    string day;
    cout << "Enter the day the call started at: ";
    cin >> day;
    cout << "Enter the time the call started at (hhmm): ";
    cin >> time;
    cout << "Enter the duration of the call (in minutes): ";
    cin >> duration;
    float cost;
    if (day=="Mon"||day=="Tue"||day=="Wed"||day=="Thr"||day=="Fri") {
        if (time >= 800 && time <= 1800) {
            cost = 0.4 * duration;
        }
        else {
            cost = 0.25 * duration;
        }
    }
    else {
        cost = 0.15 * duration;
    }
    printf("This call will cost $%.2f", cost);
}

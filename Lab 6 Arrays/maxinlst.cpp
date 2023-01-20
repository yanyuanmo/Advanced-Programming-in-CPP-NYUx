#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>
using namespace std;


int maxinlst(int lst[], int size) {
    int max_ = INT_MIN;
    for (int i = 0; i < size; i++) {
        max_ = max(lst[i], max_);
    }
    return max_;
}
#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>
using namespace std;


float avgoflst(int lst[], int size) {
    float sum_ = 0;
    for (int i = 0; i < size; i++) {
        sum_ += lst[i];
    }
    float mean_ = sum_ / size;
    return mean_;
}
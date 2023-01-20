#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


float bmimetricf(int weight, float height) {
    float bmi = weight / pow(height, 2);
    return bmi;
}
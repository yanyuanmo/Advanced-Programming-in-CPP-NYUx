#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float weight, height;
    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;
    float bmi = weight / pow(height, 2);
    if (bmi<18.5) {
        printf("BMI is: %.2f, Status is Underweight", bmi);
    }
    else if (bmi < 24.9) {
        printf("BMI is: %.2f, Status is Normal", bmi);
    }
    else if (bmi < 29.9) {
        printf("BMI is: %.2f, Status is Overweight", bmi);
    }
    else {
        printf("BMI is: %.2f, Status is Obese", bmi);
    }
    return 0;
}

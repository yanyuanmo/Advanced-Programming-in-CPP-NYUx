#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
    float p1, p2, tax_rate;
    string answer;
    bool club_card = false;
    cout << "Enter price of the first item: ";
    cin >> p1;
    cout << "Enter price of the second item: ";
    cin >> p2;
    cout << "Does customer have a club card? (Y/N): ";
    cin >> answer;
    if (answer=="y"||answer=="Y") {
        club_card = true;
    }
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> tax_rate;
    float base_price = p1+p2;
    float after_discount;
    if (p1>p2) {
        after_discount = p1+p2/2;
    }
    else {
        after_discount = p1/2+p2;
    }
    if (club_card)
        after_discount *= 0.9;
    float total_price = after_discount + after_discount*tax_rate/100;
    printf("Base price = %.2f\n", round(base_price*100)/100);
    printf("Price after discounts = %.2f\n", round(after_discount*100)/100);
    printf("Total price = %.2f\n", round(total_price*100)/100);
    return 0;
}

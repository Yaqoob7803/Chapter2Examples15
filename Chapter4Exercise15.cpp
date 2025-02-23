/*

file name:Chapter4exercise15.cpp
GitHub URL:https://github.com/Yaqoob7803/Chapter2Examples15/edit/main/Chapter4Exercise15.cpp#L4C10
programmer:Yaqoob Nagi
Date:February 2025
Requirements:

Shipping ChargesThe Fast Freight Shipping Company charges the following rates:Weight of Package in niograms)
Rate per 500 Miles Shipped 2 kg or less $1.10
Over 2 kg but not more than o kg $2.20 Over 6 kg but not more than 10 kg $3.70 Over 10 kg but not more than 20 kg $4.80
Write a program Mat asks for the weight of the package and the distance it is to be shipped, then displays the charges.
Imput Validation: Do not accept values of 0 or less for the weight of the package.
Do not acceyt weights of more than 20 kg (this is the maximum weight the company will ship). 
Do not accept distances of less than 10 miles or more than 3,000 miles. These are the company's minimum and maximum shipping
cistances.
*/
#include <iostream>
using namespace std;


int main()
{
    double weight, distance, rate, charges;

    cout << "Enter the weight of the package (kg): ";
    cin >> weight;

    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight. the package must be between 0 and 20 kg." << endl;
        return 1;
    }

    cout << "Enter the shipping distance (miles): ";
    cin >> distance;

    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance. the distance must be between 10 and 3000 miles." << endl;
        return 1;
    }
    if (weight <= 2)
        rate = 1.10;
    else if (weight <= 6)
        rate = 2.20;
    else if (weight <= 10)
        rate = 3.70;
    else
        rate = 4.80;

    charges = (distance / 500) * rate;

    cout << "The shipping charges are: $" << charges << endl;
    return 0;
}

// bmi.cpp
// Calculates body mass index (BMI) from weight in pounds and height in inches.
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    double weight_pounds;
    double height_inches;
    double bmi;
 
    cout << "Enter your weight in pounds: ";
    cin >> weight_pounds;
    cout << "Enter your height in inches: ";
    cin >> height_inches;
 
    // Both values must be positive, so stop before calculating if either is not.
    if (weight_pounds <= 0 || height_inches <= 0)
    {
        cout << "Error: weight and height must both be greater than zero." << endl;
        return 1;
    }
 
    // Use height * height to square the height (^ is not exponentiation in C++).
    bmi = weight_pounds * 703.0 / (height_inches * height_inches);
 
    // Formatting only changes the display, not the stored value.
    cout << fixed << setprecision(2);
    cout << "Your BMI is: " << bmi << endl;
 
    // The category is chosen using the unrounded BMI.
    if (bmi < 18.5)
    {
        cout << "Category: Underweight" << endl;
    }
    else if (bmi <= 25.0)
    {
        cout << "Category: Optimal weight" << endl;
    }
    else
    {
        cout << "Category: Overweight" << endl;
    }
 
    return 0;
}

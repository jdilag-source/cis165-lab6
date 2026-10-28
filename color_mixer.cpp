// color_mixer.cpp
// Mixes two primary colors (red, blue, yellow) and displays the result.
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
 
int main()
{
    const int COLOR_SIZE = 20;
    char first_color[COLOR_SIZE];
    char second_color[COLOR_SIZE];
 
    cout << "Enter the first primary color (red, blue, or yellow): ";
    cin >> setw(COLOR_SIZE) >> first_color;
    cout << "Enter the second primary color (red, blue, or yellow): ";
    cin >> setw(COLOR_SIZE) >> second_color;
 
    // strcmp returns 0 when the two C-strings match.
    bool first_is_valid = strcmp(first_color, "red") == 0 ||
                          strcmp(first_color, "blue") == 0 ||
                          strcmp(first_color, "yellow") == 0;
    bool second_is_valid = strcmp(second_color, "red") == 0 ||
                           strcmp(second_color, "blue") == 0 ||
                           strcmp(second_color, "yellow") == 0;
 
    if (!first_is_valid || !second_is_valid)
    {
        cout << "Error: both colors must be red, blue, or yellow." << endl;
    }
    else if (strcmp(first_color, second_color) == 0)
    {
        cout << "Mixed color: " << first_color << endl;
    }
    else if ((strcmp(first_color, "red") == 0 && strcmp(second_color, "blue") == 0) ||
             (strcmp(first_color, "blue") == 0 && strcmp(second_color, "red") == 0))
    {
        cout << "Mixed color: purple" << endl;
    }
    else if ((strcmp(first_color, "red") == 0 && strcmp(second_color, "yellow") == 0) ||
             (strcmp(first_color, "yellow") == 0 && strcmp(second_color, "red") == 0))
    {
        cout << "Mixed color: orange" << endl;
    }
    else
    {
        // The only remaining valid pair is blue and yellow, in either order.
        cout << "Mixed color: green" << endl;
    }
 
    return 0;
}

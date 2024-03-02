/*
Everyone likes Pizza, but people usually don’t think it places past two decimal places. Let’s do a program that asks for a diameter of a pizza and does the calculation to a greater level of precision (more accurate lower decimal place) but only shows the answer to the user to 2 decimal places.

Write a program that asks the user their name and the diameter or the pizza they want, calculate the area of the pizza using PI to four decimal places (3.1415) but show the area of their Pizza to the user to two decimal places by using setprecision and fixed from chapter 3 on the output.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
// Pi Variable
double pi = 3.1415;

// Ask Name
string fName;
cout << "What is your name: "; 
cin >> fName;
cout << endl;

// Diameter of Pizza
double diameter;
cout << "What is the diameter of the pizza?: ";
cin >> diameter;
cout << endl;


// Calculate Area
double radius = diameter / 2;
double pizzaArea = pi * radius * radius;

// Output Area (2 Decimal Places)
cout << fName << " the area of your pizza is " << setprecision(2) << fixed << pizzaArea ;

return 0;
}

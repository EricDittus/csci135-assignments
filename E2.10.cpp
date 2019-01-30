/*
Author: Eric Dittus
Course: CSCI-136
Instructor: Genady Maryash
Assignment: Exercise 2.10

This program calculates cost per 100 miles of driving, and distance
able to drive with a specified ammount of fuel in the tank.
*/

#include <iostream>
using namespace std;

int main(){
  int g, mpg, pricepg, cost, distance;

  cout << "Please input the number of gallons in your tank:" << endl;
  cin >> g;
  cout << "Please input your fuel efficiency in miles per gallon:" << endl;
  cin >> mpg;
  cout << "Please input price per gallon:" << endl;
  cin >> pricepg;
  // gives information for user to input regarding their car

  cost = (100/mpg)* pricepg;
  distance = mpg * g;

  cout << "Your cost per 100 miles is " << cost << endl;
  cout << "You can drive " << distance << " miles with the fuel in your tank" << endl;

  return 0;
}

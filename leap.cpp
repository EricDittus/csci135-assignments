/*
Author: Eric Dittus
Course: CSCI-136
Instructor: Genady Maryash
Assignment: Lab 1C

This program returns whether or not a given year is
a leap year or a common year
*/

#include <iostream>

using namespace std;

int main()
{
  int year;
  string identity;
  cout << "Enter A Year:" << endl;
  cin >> year;
  //obtain given year
  if (year % 4 != 0){
    identity = "Common Year";
  }else if (year % 100 != 0){
    identity = "Leap Year";
  }else if (year % 400 != 0){
    identity = "Common Year";
  }else{
    identity = "Leap Year";
  //determines whether or not it is a leap year
  }

  cout << identity << endl;
  //return result

  return 0;
}

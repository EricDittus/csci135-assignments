/*
Author: Eric Dittus
Course: CSCI-136
Instructor: Genady Maryash
Assignment: Lab 1D

This program determines the number of days in a given month.
Since the number of days in february is increased by one on a Leap
year, I have accounted for that.
*/


#include <iostream>
using namespace std;

int main()
{
  int year,month,days;
  string identity;

  cout << "Enter year:" << endl;
  cin >> year;
  cout << "Enter month:" << endl;
  cin >> month;
  //recieve given date

  if (year % 4 != 0){
    identity = "Common Year";
  }else if (year % 100 != 0){
    identity = "Leap Year";
  }else if (year % 400 != 0){
    identity = "Common Year";
  }else{
    identity = "Leap Year";
  }
  //determine type of year to be used if month is a february

  if(month == 2){
    if(identity == "Leap Year"){
      days = 29;
    }else if(identity == "Common Year"){
      days = 28;
    }
  }
  //give number of days for february for a leap year or common year
  if(month == 1|| month ==3|| month ==5|| month ==7|| month ==8|| month ==10|| month ==12){
    days = 31;
  }else if(month == 4|| month ==6|| month ==9|| month ==11){
    days = 30;
  }
  //gives number of days for other months not affected by leap year
  cout << days << " days" << endl;
  //prints days to user
  return 0;
}

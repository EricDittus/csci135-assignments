/*
Author: Eric Dittus
Course: CSCI-136
Instructor: Genady Maryash
Assignment: Lab 1B

This program determines the smaller of three numbers.
*/

#include <iostream>
using namespace std;

int main()
{
  int num1,num2,num3,smaller;

  cout << "Enter Your First Number:" << endl;
  cin >> num1;
  cout << "Enter Your Second Number:" << endl;
  cin >> num2;
  cout << "Enter Your Third Number:" << endl;
  cin >> num3;
  //recieve given numbers

  if(num2 > num1 && num3 > num1){
    smaller = num1;
  }
  if(num1 > num2 && num3 > num2){
      smaller = num2;
  }
  if(num1 > num3 && num2 > num3){
      smaller = num3;
  }
  //compares "size" of all numbers to find the smaller
  //of the three

  cout << "The smaller of the three is " << smaller << endl;
  //return smallest number

  return 0;
}

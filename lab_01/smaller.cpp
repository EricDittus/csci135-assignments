/*
Author: Eric Dittus
Course: CSCI-136
Instructor: Genady Maryash
Assignment: Lab 1A

This program determines the smaller of two given numbers.
*/

#include <iostream>
using namespace std;

int main()
{
 int num1,num2,smaller;

 cout << "Enter Your First Number:" << endl;
 cin >> num1;
 cout << "Enter Your Second Number:" << endl;
 cin >> num2;
 //recieve given numbers

 if(num1 > num2){
   smaller = num2;
 } else if(num2 > num1){
   smaller = num1;
 }
 //determine smaller number

 cout << "The smaller of the two is " << smaller << endl;
 //print smaller number

 return 0;
}

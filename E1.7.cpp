/*
Author: Eric Dittus
Course: CSCI-136
Instructor: Genady Maryash
Assignment: Exercise 1.7

This program prints out my three favorite tv shows.
*/

#include <iostream>
using namespace std;
  void print(string item1,
             string item2,
             string item3){
    cout << item1 << endl;
    cout << item2 << endl;
    cout << item3 << endl;
  }
  int main()
  {
    cout << "These are my three favorite tv shows:" << endl;
    print("The Walking Dead","Game of Thrones","Breaking Bad");
    return 0;
  }

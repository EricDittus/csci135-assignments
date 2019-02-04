/*
Author: Eric Dittus
Course: CSCI-136
Instructor: Genady Maryash
Assignment: E4.8

This program prints each character of
a given word on each subsequent line.
*/
#include <iostream>
using namespace std;


int main(){
  string word;
  cout << "Please provide a word:"<< endl;
  cin >> word;
  for(int i=0;i<=word.size()-1;i++){
    cout << word[i] << endl;
  }
  return 0;
}

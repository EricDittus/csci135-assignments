#include <iostream>
using namespace std;

int main() // this is my main!
{

  int sum = 0, num;
  char oper;
//this is a comment to get the credit

  while(cin >> num){


    if(oper == '+'){
      sum = sum + num;
    }
    else if(oper == '-'){
      sum = sum - num;
    }else{
      sum = sum + num;
    }
    //char tell my program
    //whether to add or subtract
    cin >> oper;
    //operater is given
    if(oper == ';'){ //notices that there is a semicolon
        cout << sum << endl;
        sum = 0;
        oper = ' ';
      }
    }
  //prints
  //sums for user

  return 0;
}

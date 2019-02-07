#include <iostream>
using namespace std;

int main()
{
//declared
//main
  int sum = 0, num;
  char oper;
  //declaring
  //my
  //variables

  while(cin >> num){
    //while loop
    //reads
    //text file

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
  }
  cout << sum << endl;
  //prints
  //sums for user
  return 0;
}

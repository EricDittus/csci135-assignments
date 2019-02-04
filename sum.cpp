#include <iostream>
using namespace std;
int main() {
    int sum;
    int s;
    int new_num;
    cout << "Please input a series of numbers you want to sum: " << endl;
    while(cin >> s) {
      // While the reading operation is a success
          new_num = s;
          sum = sum + new_num;
          // add following value to cummulative sum
    }
    cout << "Your sum is " << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;
//included
//namespace
int main() {
    int sum = 0;
    int s;
    //declaration
    //of
    //integers
    while(cin >> s) {
      // While the reading operation is a success

          sum = sum + s;
          // add following value to cummulative sum
    }
    cout << "Your sum is " << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int s;
    while(cin >> s) {
      // While the reading operation is a success

          sum = sum + s;
          // add following value to cummulative sum
    }
    cout << "Your sum is " << sum << endl;
    return 0;
}

#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iostream>
//putting in all includes
using namespace std;

int main(){ // main function
  ifstream fin ("mutations.txt");
  if(fin.fail()){ //fin into file
    cerr <<"File cannot be read, opened, or does not exist.\n";
    exit(1);
  }
  string mut, orig;
  while(getline (fin, mut), getline (fin, orig)){
    int count = 0; // while loop stuff
    for(int i = 0;i < 45; i++){ //coolio
      if (mut[i] != orig[i]){
        count += 1; //count + 1
      }
    }
    if (count == 17) {
      cout << count << " no" << endl; //couts no
      count = 0; //must reset
                //for next while
    } else if (count > 0){
      cout << count << " yes" << endl; //couts yes
      count = 0;//count is zero again
    } else{
      cout << 0 << " no" << endl; //couts no
      count = 0;
    }
  }
  return 0;
}

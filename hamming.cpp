#include <cmath>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
  ifstream fin ("mutations.txt");
  if(fin.fail()){
    cerr <<"File cannot be read, opened, or does not exist.\n";
    exit(1);
  }
  string mut, orig;
  while(getline (fin, mut), getline (fin, orig)){
    int count = 0;
    for(int i = 0;i < 45; i++){
      if (mut[i] != orig[i]){
        count += 1;
      }
    }
    if (count == 17) {
      cout << count << " no" << endl;
      count = 0;
    } else if (count > 0){
      cout << count << " yes" << endl;
      count = 0;
    } else{
      cout << 0 << " no" << endl;
      count = 0;
    }
  }
  return 0;
}

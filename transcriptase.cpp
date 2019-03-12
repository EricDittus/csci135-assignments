#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>
int main()
{
  std::string u = "U";
  std::string a = "A";
  std::string g = "G";
  std::string c = "C";
  std::ifstream fin("dna.txt");
if (fin.fail()) {
    std::cerr << "File cannot be read, opened, or does not exist.\n";
    exit(1);
}
std::string strand;
while(getline(fin, strand)) {
  for(int i = 0; i < strand.length(); i++){
    if(strand[i] == 'a'||strand[i] == 'A'){
      strand.replace(i,1,u);
    }
    if(strand[i] == 't'||strand[i] == 'T'){
      strand.replace(i,1,a);
    }
    if(strand[i] == 'c'||strand[i] == 'C'){
      strand.replace(i,1,g);
    }
    if(strand[i] != 'C' && (strand[i] == 'g'||strand[i] == 'G')){
      strand.replace(i,1,c);
    }
  }
  std::cout << strand << std::endl;
}
fin.close();

return 0;
}

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>
int main()
{

  std::ifstream fin("dna.txt");
if (fin.fail()) {
    std::cerr << "File cannot be read, opened, or does not exist.\n";
    exit(1);
}
std::string strand;

while(getline(fin, strand)) {
  for(int i = 0; i < strand.length(); i++){
    if(strand[i] == 'a'||strand[i] == 'A'){
      std::cout << 'U';

    }else if(strand[i] == 't'||strand[i] == 'T'){
      std::cout << 'A';

    }else if(strand[i] == 'c'||strand[i] == 'C'){
      std::cout << 'G';
    }else if(strand[i] == 'g'||strand[i] == 'G'){
      std::cout << 'C';
    }else{
      std::cout << "\n";
    }
  }
  std::cout << "\n";
}

}
fin.close();

return 0;
}

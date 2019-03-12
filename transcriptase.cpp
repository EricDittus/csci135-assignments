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

while(getline(fin, strand)) {//gets the line
  for(int i = 0; i < strand.length(); i++){//loops through each
    if(strand[i] == 'a'||strand[i] == 'A'){//char in the line
      std::cout << 'U';

    }else if(strand[i] == 't'||strand[i] == 'T'){//these run through
      std::cout << 'A';                          //each letter to print out
                                                //desired one
    }else if(strand[i] == 'c'||strand[i] == 'C'){
      std::cout << 'G';
    }else if(strand[i] == 'g'||strand[i] == 'G'){
      std::cout << 'C';
    }else{
      std::cout << "\n"; //creates new line
    }
  }
  std::cout << "\n";//skips line
}
fin.close();

return 0;
}

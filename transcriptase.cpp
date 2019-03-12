#include <iostream>
#include <fstream>

int main()
{
  std::ifstream fin("dna.txt");
if (fin.fail()) {
    cerr << "File cannot be read, opened, or does not exist.\n";
    exit(1);
}
string strand;
while(getline(fin, strand)) {
  for(int i = 0; i < strand.length(); i++){
    if(strand[i] = 'a'||strand[i] = 'A'){
      strand[i] = 'U';
    }
    if(strand[i] = 't'||strand[i] = 'T'){
      strand[i] = 'A';
    }
    if(strand[i] = 'c'||strand[i] = 'C'){
      strand[i] = 'G';
    }
    if(strand[i] = 'g'||strand[i] = 'G'){
      strand[i] = 'C';
    }
  }
  std::cout << strand << std::cout;
}
fin.close();

return 0;
}

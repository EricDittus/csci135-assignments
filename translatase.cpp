#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//look up the codon
string dictionary_read(std::string codon) {
  string amino = "";
  string key, value;
  ifstream dict("codons.tsv");
  dict.clear(); // reset error state
  dict.seekg(0); // set position - return file pointer to the beginning

  if (dict.fail()) {
    cerr << "File cannot be read, opened, or does not exist.\n";
    exit(1);
  }
  while (dict >> key >> value) {
    if (codon == key) {
      amino = value;
    }
  }
  return amino;
}
char DNA_to_RNA(char letter) {
  char pair = ' ';
  if (letter == 'A' || letter == 'a') {
    pair = 'U';
  }
  else if (letter == 'T' || letter == 't') {
    pair = 'A';
  }
  else if (letter == 'C'|| letter == 'c') {
    pair = 'G';
  }
  else if (letter == 'G' || letter == 'g') {
    pair = 'C';
  }
  return pair;
}

int main() {
  string rna = "";
  ifstream fin("dna2b.txt");
      if (fin.fail()) {
          cerr << "File cannot be read, opened, or does not exist.\n";
          exit(1);
      }
      string strand;
      string value_strand = "";
      //char letter;
      while(getline(fin, strand)) {
        cout << endl;
        int size = strand.length();
        for (int i = 0; i < size; i++) {
          //cout << DNAbase_to_mRNAbase(strand[i]);
          rna = rna + DNA_to_RNA(strand[i]);
        }
        char letter = ' '; //stores letter
        string codon = ""; //stores 3 letters
        for (int i = 0; i < rna.length(); i++) {
          letter = rna[i];
          codon += letter;
          if (codon.length() == 3) {
            string convert = dictionary_read(codon);
            if (convert == "Stop") { //if codon converts to stop, next line
              break;
            }
            value_strand = value_strand + convert + '-';
            codon = ""; //return back to empty
          }
        }
        int position = 0;
        //cout << strandOfvalues;
        for (int j = 0; j < value_strand.length(); j++) {
          if (value_strand[j] == 'M') {
            break;
          }
          else {
            position++;
          }
        }
        //cout << position;
        int length = value_strand.length() - position;
        string lineResult = strandOfvalues.substr(position, length-1);
        //cout << len;
        cout << lineResult;
        strandOfvalues = ""; //return back to empty
        rna = ""; //returns to empty for next strand
      }
      fin.close();
      return 0;
}

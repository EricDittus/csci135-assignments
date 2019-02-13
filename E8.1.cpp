#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
 ofstream stream;
 stream.open("hello.txt");

 stream << "Hello, World!";

 stream.close();

 ifstream new_stream;
 new_stream.open("hello.txt");

 // Read the message into a string variable and print it.
 string word;
 getline(new_stream, word);
 cout << word << endl;
 new_stream.close();
 return 0;
}

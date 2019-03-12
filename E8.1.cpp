#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
 ofstream stream;
 stream.open("hello.txt");
//does first task
//opens file named hello.txt
 stream << "Hello, World!";
//second task
//stores Hello, World! in file
 stream.close();
//third task
//closes file
 ifstream new_stream;
 new_stream.open("hello.txt");
//fourth task
//opens file again
 string word;
 getline(new_stream, word);
 cout << word << endl;
//reads word - fifth task
 new_stream.close();
 return 0;
}

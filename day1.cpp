#include <iostream>
using namespace std;

int main(){
    cout << "Hello world" << endl;
    string name;
    cout <<  "enter your name: ";
    cin >> name;
    cout << "Hello world this is " << name << endl;
    return 0;
}

// to compile it write " g++ file_name -o filename_withoutextension" ex. " g++ day1.cpp -o day1"
// then run it with " .\filename_withoutextension " ex. " .\day1"
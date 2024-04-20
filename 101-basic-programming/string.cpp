#include<iostream>
#include<string>

using namespace std;

int main() {
    string name;
    cout << "What your name?" << endl;
    cin >> name;
    cout << "My name is " << name << "." << endl;
    cout << "Slice str" << endl;
    char firstChar = name[0];
    cout << "First Char: " << firstChar;
    return 0;
}

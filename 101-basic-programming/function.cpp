#include<iostream>
#include<string>

using namespace std;

void isNotRetur() {
    cout << "not return" << endl;
}

string isReturn() {
    return "is return";
}

int add(int a, int b) {
    return a + b;
}

int main() {
    isNotRetur();
    string hello = isReturn();
    cout << hello << endl;
    int addNum = add(1, 2);
    cout << addNum;
    return 0;
}

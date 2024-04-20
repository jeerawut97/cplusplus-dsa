#include<iostream>

using namespace std;

int main() {
    int ages[2] = {0, 0};

    cout << "before" << endl;
    cout << ages[0] << endl;
    cout << ages[1] << endl;

    cout << "assign" << endl;
    ages[0] = 1;
    ages[1] = 2;

    cout << "after" << endl;
    cout << ages[0] << endl;
    cout << ages[1] << endl;
    return 0;
}

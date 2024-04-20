#include<iostream>
#include<string>

using namespace std;

int main() {
    int age;
    cout << "How old are you?" << endl;
    cin >> age;

    if (age >= 18 && age <= 60) {
        cout << "Pass";
    } else {
        cout << "Don't pass";
    }
}

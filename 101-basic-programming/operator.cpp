#include<iostream>

using namespace std;

int main() {
    int age1;
    int age2;
    float averageAge;

    cout << "Input age1: ";
    cin >> age1;
    cout << "Input age2: ";
    cin >> age2;
    averageAge = (age1 + age2) / 2;
    cout << "Average age: " << averageAge;
    return 0;
}

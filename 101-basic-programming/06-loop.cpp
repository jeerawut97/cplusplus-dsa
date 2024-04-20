#include <iostream>

using namespace std;

int main() {
    int count = 0;

    cout << "while" << endl;
    while (count < 10) {
        cout << "Count = " << count << endl;
        count += 1;
    }

    count = 0;
    cout << "for" << endl;
    for (count; count < 10; count++) {
        cout << "Count = " << count << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int* p = &num;

    *p = 20;

    cout << num << endl;

    return 0;
}

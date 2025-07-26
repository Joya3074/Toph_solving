#include <iostream>
#include <string>
using namespace std;

int main() {
    string i, j;
    cin >> i >> j;

    int last_i = i.back() - '0';
    int last_j = j.back() - '0';

    if ((last_i + last_j) % 2 == 0)
        cout << "Black" << endl;
    else
        cout << "White" << endl;

    return 0;

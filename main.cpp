#include <iostream>
#include "fizzbuzz.h"

using namespace std;

int main() {
    int contentSelect = 1;

    switch (contentSelect) {
        case 1:
            doFizzBuzz();
        default:
            cout << "please select 1 ~ 3" << endl;
    }
}

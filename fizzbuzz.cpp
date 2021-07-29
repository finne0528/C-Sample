//
// Created by Mineshima Kazuki on 2021/07/29.
//
#include <iostream>
using namespace std;

string getFizzBuzzText(int num) {
    bool isMultipleOf3 = num % 3 == 0;
    bool isMultipleOf5 = num % 5 == 0;

    string text;
    if (isMultipleOf3) text.append("fizz");
    if (isMultipleOf5) text.append("buzz");
    if (text.empty()) text.append(to_string(num));

    return text;
}

int doFizzBuzz() {
    int limit = 100;

    for (int i = 0; i <= limit; i++) {
        cout << getFizzBuzzText(i) << endl;
    }
    return 0;
}

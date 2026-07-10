// From a given string change small case vowel to capital case. If vowel already in capital case then no change
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello Bangladesh";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u') {
            str[i] = toupper(str[i]);
        }
    }

    cout << str << endl;
    return 0;
}

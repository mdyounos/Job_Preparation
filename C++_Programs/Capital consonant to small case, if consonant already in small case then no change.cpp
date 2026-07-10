//Capital consonant to small case, if consonant already in small case then no change
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello Bangladesh";

    for (int i = 0; i < str.length(); i++) {
        if ((str[i]>=65&&str[i]<=90)&&!(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')) {
            str[i] = tolower(str[i]);
        }
    }

    cout << str << endl;
    return 0;
}

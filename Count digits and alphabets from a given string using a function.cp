//To count  digits and alphabets from a given string using a function.
#include<bits/stdc++.h>
using namespace std;

void Count(string str);
int main()
{
    string str;
    printf("Give a string: ");
    getline(cin, str);
    cout<<"You entered: "<<str<<endl;
    Count(str);

    return 0;
}
void Count(string str)
{
    int Length=str.length();
//    cout<<Length<<endl;
    int DigitCount=0,AlphaCount=0;
    for(int i=0;i<Length;i++)
    {
//        if(str[i]>='0'&&str[i]<='9')
        if(isdigit(str[i]))
        {
            DigitCount++;
        }
//        else if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
        else if(isalpha(str[i]))
        {
            AlphaCount++;
        }
    }
    cout<<"Total digit is: "<<DigitCount<<endl;
    cout<<"Total alphabet is: "<<AlphaCount<<endl;
}

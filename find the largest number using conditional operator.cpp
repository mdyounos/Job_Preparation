#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int big= a>b?(a>c?a:c):(b>c?b:c);
    cout<<big<<endl;
    return 0;
}

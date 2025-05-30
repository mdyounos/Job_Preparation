#include<iostream>
using namespace std;

void pattern(int array[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i;j++)
            cout<<array[j]<<" ";
    cout<<endl;
    }
    n=n-i;
cout<<array[n-1]<<" ";
}
int main()
{
    int array[6]={1,2,3,4,5,6};
    int i=5;
    pattern(array,i);
    return 0;
}

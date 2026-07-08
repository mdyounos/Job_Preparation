//Write a C/C++ program that takes input 5 numbers in an Array and make sum the biggest and lowest number and check that sum is prime or not prime.
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[5];
   cout<<"Enter 5 numbers: "<<endl;
   for(int i=0;i<5;i++)
   {
       cin>>arr[i];
   }
   int largest=arr[0];
   int small=arr[0];
   for(int i=1;i<5;i++)
   {
       if(largest<arr[i])
        largest=arr[i];
       if(small>arr[i])
        small=arr[i];
   }
   int sum=largest+small;
   cout<<sum<<endl;
   bool prime=true;
   if(sum<=1)
    prime=false;
   else
   {
       for(int i=2;i*i<=sum;i++)
       {
           if(sum%i==0)
           {
              prime=false;
              break;
           }
       }
   }
   if(prime==true)
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime"<<endl;
    return 0;
}

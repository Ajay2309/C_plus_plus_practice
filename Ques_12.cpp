// Write a Program to Check Whether a Number Is a Palindrome or Not.
// a number remains same while reversing......like 121 when reversed 121

#include<iostream>
using namespace std;

int main(){
    int n, rev = 0;
    cout<<"Enter the number : ";
    cin>>n;
    int temp=n;
    while(n!=0)
    {
        int rem = n%10;
        rev = rev * 10 + rem;
        n = n/10;
    }
    if(rev == temp)
    {
        cout<<"The number is Palindrome"<<endl;
    }
    else{
        cout<<"The number is not Palindrome"<<endl;
    }
    return 0;
}
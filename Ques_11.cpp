// Write a program to reverse a number.

#include<iostream>
using namespace std;

int main(){
    int n, rev = 0;
    cout<<"Enter any number : ";
    cin>>n;
    while(n!=0){
        int rem = n%10;
        rev = rev*10+rem;
        n = n/10;
    }
    cout<<"Reverse of given number is "<<rev<<endl;
    return 0;
}
// Write a Program to Check Whether a Number Is Prime or Not.

#include<iostream>
using namespace std;

int main(){
    int prime;
    cout<<"Enter the number : ";
    cin>>prime;
    if(prime%2==1){
        cout<<prime<<" is a Prime Number";
    }
    else{
        cout<<prime<<" is not a Prime Number";
    }
    return 0;
}
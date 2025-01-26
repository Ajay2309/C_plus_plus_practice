// Write a Program to Swap Two Numbers.

#include<iostream>
using namespace std;

int main(){
    int a, b, num;
    cout<<"Ente the value of a : ";
    cin>>a;
    cout<<"Ente the value of b : ";
    cin>>b;
    cout<<"\nThe value of a is "<<a<< " and the value of b is "<<b<<endl;
    
    num = a;
    a = b;
    b = num;
    cout<<"After Swaping"<<endl;
    cout<<"The value of a is "<<a<< " and the value of b is "<<b<<endl;


    return 0;
}
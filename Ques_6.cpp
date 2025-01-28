// Write a Program to Find Compound Interest.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double principal, rate, time;
    cout<<"Enter Principal amount : ";
    cin>>principal;
    cout<<"Enter rate on interest in % : ";
    cin>>rate;
    cout<<"Enter time in year : ";
    cin>>time;

    rate = rate/100;
    double Amount = principal * pow((1+rate),time);
    double CI = Amount - principal;
    
    cout<<"Compound Interest is "<<CI;


    return 0;
}
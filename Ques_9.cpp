// Write a Program to Check if a Given Year Is a Leap Year.

#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter the Year : ";
    cin>>year;
    if(year%4==0){
        cout<<year<< " is a leap year";
    }
    else{
        cout<<year<<" is not a leap year";
    }
    return 0;
}
// Write a Program to Make a Simple Calculator.

#include<iostream>
using namespace std;

int main(){
    char calculation;
    int num1, num2;
    cout<<"Enter any two numbers "<<endl;
    cin>>num1>> num2;
    char a,s,m,d;
    cout<<"Enter the operation"<<endl;
    cout<<"'a' for addition"<<endl;
    cout<<"'s' for subtraction"<<endl;
    cout<<"'m' for multiplication"<<endl;
    cout<<"'d' for division \n"<<endl;

    cout<<"Enter the operation :";
    cin>>calculation;

    switch (calculation)
    {
    case 'a':
        cout<<num1 + num2<<endl;
        break;
    case 's':
        cout<<num1 - num2<<endl;
        break;
    case 'm':
        cout<<num1 * num2<<endl;
        break;
    case 'd':
        cout<<num1 / num2<<endl;
        break;
    
    default:
        cout<<"Wrong Operation"<<endl;
        break;
    }
    return 0;
}
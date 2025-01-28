//  Write a Program to Check Even or Odd Integers.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    if(num%2 ==0){
        cout<<"The number is Even "<<endl;
    }
    else{
        cout<<"The number is Odd"<<endl;
    }
    
    
    return 0;
}
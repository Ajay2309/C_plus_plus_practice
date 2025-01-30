// Write a Program to Find the Largest Among 3 Numbers.

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter three number"<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is largest number"<<endl;
        }
    }
    if(b>c){
        if(b>a){
            cout<<b<<" is largest number"<<endl;
        }
    }
    if(c>b){
        if(c>a){
            cout<<c<<" is largest number"<<endl;
        }
    }

    return 0;
}
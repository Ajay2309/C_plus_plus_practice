// Write a Program to Find the Size of int, float, double, and char.

#include<iostream>
using namespace std;

int main(){
    int a = 34;
    float b = 153.2455;
    double c = 15476456.3564564;
    char d = 'c';

    cout<<"Size of int : "<<sizeof(a)<< " bytes"<<endl;
    cout<<"Size of float : "<<sizeof(b)<< " bytes"<<endl;
    cout<<"Size of double : "<<sizeof(c)<< " bytes"<<endl;
    cout<<"Size of char : "<<sizeof(d)<< " bytes"<<endl;
    return 0;
}

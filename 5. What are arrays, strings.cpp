#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5];
    a[0]=1;
    a[1]=1;
    a[2]=1;
    a[3]=1;
    a[4]=1;
    a[5]=5;
    cout<<a[5]<<endl;

    int b[3][5]; // here the left entry tells us rows, and right entry tells us columns
    b[1][5] = 5;
    cout<<b[1][5]<<endl;
    cout<<b[1][1]<<endl; // if a value is not initialised, it is automatically intialilised as a random garbage value

    string s = "Shashwat";
    cout<<s[2]<<endl; // will print the element present in 2nd index
    int l= s.length();
    cout<<s[l-1]; // will print last element of the string
}
#include<bits/stdc++.h>
using namespace std;
int sum(int a){
    return a+10;
}
int sum1(int &a){
    a=a+10;
    return a;
}
int main(){
    int num = 100;
    cout<<sum(num)<<endl; // this is called pass by value and the passed value does not change 
    cout<<num<<endl; 
    cout<<sum1(num)<<endl; // this is called pass by refernce and the address of the passed variable is passed and any changes will reflect upon it
    cout<<num<<endl;
    // an array by default follows pass by reference
}

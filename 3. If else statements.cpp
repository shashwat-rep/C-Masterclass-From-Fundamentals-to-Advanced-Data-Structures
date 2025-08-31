#include<bits/stdc++.h>
using namespace std;
int main(){

    /*
    // Program to check whether a person is adult or not
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age >=18){
        cout<<"You are an adult";
    }else{
        cout<<"You are not an adult";
    }
    */

    // Write a grade calculator program
    int m;
    cout<<"Enter your marks";
    cin>>m;
    if(m>=70 && m<=100){
        cout<<"A";
    }else if(m>=60 && m<=69){
        cout<<"B";
    }else if(m>=50 && m<=59){
        cout<<"C";
    }else if(m>=45 && m<=49){
        cout<<"D";
    }else if(m>=25 && m<=44){
        cout<<"E";
    }else if(m<=24 && m>=0){
        cout<<"F";
    }else{
        cout<<"Invalid marks entered";
    }
    return 0;
}
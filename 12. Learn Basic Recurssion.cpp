/*
What is Stack Overflow in Recursion?

Whenever recursion calls are executed, they’re simultaneously stored in a recursion stack where they wait for the completion of the recursive function. 
A recursive function can only be completed if a base condition is fulfilled and the control returns to the parent function. 
But, when there is no base condition given for a particular recursive function, it gets called indefinitely which results in a Stack Overflow i.e, exceeding the memory limit of the recursion stack and hence the program terminates giving a Segmentation Fault erro

Recursive Tree

A recursive tree is basically a representative form of recursion which depicts how functions are called and returned as a series of events happening consecutively. */
#include<bits/stdc++.h>
using namespace std;

void printSomething(int n){
    if(n>0){
        cout<<"Hello recurrsion"<<endl;
        printSomething(n-1);
    }
}

// Print your Name n times using recursion
void printName(int n){
    if(n>0){
        cout<<"Shashwat Kashyap"<<endl;
        printName(n-1);
    }
}

// Print from 1 to n using Recursion
void print1ton(int n, int i){
    if(n>=i){
        cout<<i<<" ";
        print1ton(n, i+1);
    }
}

// Print from n to 1 using Recursion
void printnto1(int n){
    if(n>=1){
        cout<<n<<" ";
        printnto1(n-1);
    }
}

// Given a number n, find out the sum of the first n natural numbers.
int sumOfn(int n){
    if(n>=1){
        return n+sumOfn(n-1);
    }else{
        return 0;
    }
}

// Given a number n,  print its factorial.
int factorial(int n){
    if(n==0){
        return 1;
    }else if(n>=1){
        return n*factorial(n-1);
    }else{
        cout<<"Enter the valid number";
    }
}

// You are given an array. 
// The task is to reverse the array and print it. 
void reverseArray(int arr[], int n, int i, int rev[]){
    if(i<=n){
        rev[n-i]=arr[i];
        reverseArray(arr, n, i+1, rev);
    }
}

// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. 
// Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.
bool isPalindrome(string s) {
    string temp, temp1;
    for(auto& it:s){ // remember this type of loop to convert a string to lower case
        it=(char)tolower(it);// remember that  tolower() works only with character
    }
    for(int i=0;i<s.size();i++){
        if(((int)s[i]>=97 && (int)s[i]<=122)||((int)s[i]>=48 && (int)s[i]<=57)){
            temp += s[i];
        }
    }
    for(int i=temp.size()-1;i>=0;i--){
        temp1 += temp[i];
    }
    if(temp1==temp){
        return true;
    }else{
        return false;
    }
}

// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).
int fib(int n) {
    int sum=0;
    int a=0;
    int b=1;
    if(n==0){
        return a;
    }else if(n==1){
        return b;
    }
    else{
        for(int i=2; i<=n;i++){
            sum=a+b;
            a=b;
            b=sum;
        }
        return sum;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    // printSomething(n);
    // printName(n);
    // print1ton(n, 1);
    // printnto1(n);
    // cout<<"Sum of n integers: "<<sumOfn(n);
    // cout<<"The factorial is: "<<factorial(n);
    // int arr[]={1,2,3,4};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // int rev[n];
    // reverseArray(arr, n-1, 0, rev);
    // for(int i=0;i<n;i++){
    //     cout<<rev[i]<<" ";
    // }
    // string s = "A man, a plan, a canal: Panama";
    // cout<<"Is palindrome (0/1)? "<<isPalindrome(s);
    cout<<"The sum is "<<fib(n);
}
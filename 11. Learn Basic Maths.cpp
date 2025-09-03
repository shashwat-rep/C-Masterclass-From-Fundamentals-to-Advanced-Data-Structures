#include<bits/stdc++.h>
using namespace std;

// Given an integer N, return the number of digits in N.
int numOfDigits(int n){
    int count;
    if(n<0){ // as it is given in the question that we will given an integer and integer can be -ve
        n *= -1;
    }
    if(n==0){
        count=1; // 0 has 1 digits
    }else{
        count=(int)(log10(n)+1); // more optimized way rather than using a loop to count the no. of digits
    }
    return count;
}

// Given a signed 32-bit integer x, return x with its digits reversed. 
// If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
int reverse(int x) {
    int res= 0;
    while (x != 0) {
        int temp = x % 10;
        x /= 10;
        if (res > INT_MAX / 10 || (res == INT_MAX / 10 && temp > INT_MAX % 10)) {
            return 0;
        }
        if (res < INT_MIN / 10 || (res == INT_MIN / 10 && temp < INT_MIN % 10)) {
            return 0;
        }
        res = res * 10 + temp;
    }
    return res;
}

// Given an integer x, return true if x is a palindrome, and false otherwise.
bool isPalindrome(int x) {
    long res=0; // as in line 44 there may be a case where res*10 would exceed the INT_MAX value 
    if(x<0){// negative no. are not palindrome
        return false;
    }
    for(int i=x;i!=0;i=i/10){
        res=(res*10) + (i%10);
    }
    return (res==x); 
}

// Given two integers N1 and N2, find their greatest common divisor.
int gcd(int a, int b){
    if(a>b){
        a += b;
        b = a-b;
        a -=b;
    }
    if(a==0){
        return b;
    }
    return gcd(b%a, a);//12%18 is 12 ...... 18%12 is 6
}

// Given an integer N, return true it is an Armstrong number otherwise return false.
int isArmstrong(int n){
    int power = (int)(log10(n)+1);
    int sum=0;
    for(int i=n;i!=0;i=i/10){
        int temp=1;
        for(int j=power;j>=1;j--){ // using pow function was somehow giving incorrect output
            temp *= i%10;
        }
        sum += temp;
    }
    return (sum==n);
}

// Given an integer N, return all divisors of N.
vector<int> divisors(int n){
    vector<int> div;
    for(int i=2; i<=n/2;i++){
        if(n%i==0){
            div.emplace_back(i);
        }
    }
    div.emplace_back(n);
    return div;
}

// Given an integer N, check whether it is prime or not.
// A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.
bool isPrime(int n){
    int count=0;
    if(n<2){
        return false;
    }else{
        for(int i=2; i<=sqrt(n);i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==0){
            return true;
        }else{
            return false;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The number of digits in "<<n<<" are "<<numOfDigits(n)<<endl;
    cout<<"The reverse of "<<n<<" is "<<reverse(n)<<endl;
    cout<<"Palindrome ? (0/1) "<<isPalindrome(n)<<endl;
    cout<<"Armstrong ? (0/1) "<<isArmstrong(n)<<endl;
    cout<<"Divisors of "<<n<<" are: ";
    for(auto it:divisors(n)){
        cout<<it<<" ";
    }
    cout<<endl<<"Prime ? (0/1) "<<isPrime(n);
    // int a,b;
    // cout<<"Enter values of a and b: ";
    // cin>>a>>b;
    // cout<<"The gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b);
}
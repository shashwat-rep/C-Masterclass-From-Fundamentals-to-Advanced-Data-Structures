#include<bits/stdc++.h>
int main(){
    int a = 10; //long, long long
    float b = 10.2; // double
    std::string s = "hi";// char
    std::string n;
    std::cout<<"Enter your name ";
    getline(std::cin, n); // we use getline to fetch the input with spaces else "Shashwat Kashyap" if given as input will be stored in two individual strings
    std::cout<<n;
}

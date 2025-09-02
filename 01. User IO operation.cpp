#include<iostream> // cin and cout are part of iostream library
#include<math.h>
#include<bits/stdc++.h> // we can use this instead of manually adding multiple libraries mannually (yes it'll take more time to run but save no. of code lines)
using namespace std; // by declaring this we need not to write std:: again and again, it is convinient for smaller program but naming conflict may occur in larger programs
// main function serves as the enrty point of the program
int main(){ 
    std::cout<<"Hello World "; // here "<<" is an insertion operator which direct data to cout
    std::cout<<"Hello World \n";
    std::cout<<"Hello World ";
    std::cout<<"Hello World " <<std::endl; // both \n and endl works the same but \n works faster than endl
    std::cout<<"Hello World ";
    cout<<"Hello world\n";
    int x, y;
    cout<<"Enter the integers ";
    cin>>x>>y;
    cout<<"The value is "<<x<<" and "<<y;
    return 0;
}

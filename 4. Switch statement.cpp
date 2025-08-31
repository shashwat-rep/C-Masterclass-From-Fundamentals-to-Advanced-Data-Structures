#include<bits/stdc++.h>
using namespace std;
int main(){
    /*int d;
    cout<<"Enter the number ";
    cin>>d;
    switch(d){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Invalid input";
    }*/

    char g;
    cout<<"Enter the grade ";
    cin>>g;
    switch(g){
        case 'A':
        cout<<"Excellent";
        break;
        case 'B':
        cout<<"Good";
        break;
        default:
        cout<<"Better luck next time";
    }

    // notice that switch statement can only take integers and characters as input
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, res=1;
    cout<<"Enter the number ";
    cin>>n;
    if(n==0){
        cout<<"The factorial is 1";
    }else if(n<0){
        cout<<"Enter +ve no.";
    }else{
        int i=1;
        while(i<=n){
            res=res*i;
            i++;
        }
    }
    cout<<"The factorial is "<<res;
    return 0;
}

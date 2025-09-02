#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    /*

    *****
    *****
    *****
    *****
    *****
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    *
    **
    ***
    ****
    *****
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    1
    12
    123
    1234
    12345
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    1
    22
    333
    4444
    55555
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

    *****
    ****
    ***
    **
    *
    for(int i=n; i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    12345
    1234
    123
    12
    1
    for(int i=n; i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

        *
       ***
      *****
     *******
    *********
    for(int i=1; i<=n;i++){
        for(int j=i+1;j<=n;j++){
            cout<<" ";
        }
        for(int j=1;j<=(i*2)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    *********
     *******
      *****
       ***
        *
    for(int i=n; i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=(i*2)-1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }

        *
       ***
      *****
     *******
    *********
    *********
     *******
      *****
       ***
        *
    for(int i=1; i<=n;i++){
        for(int j=i+1;j<=n;j++){
            cout<<" ";
        }
        for(int j=1;j<=(i*2)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n; i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=(i*2)-1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    *
    **
    ***
    ****
    *****
    *****
    ****
    ***
    **
    *
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n; i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    1
    01
    101
    0101
    10101
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }

    1        1
    12      21
    123    321
    1234  4321
    1234554321
    for(int i=n; i>=1;i--){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        for(int j=(i*2)-2;j>=1;j--){
            cout<<" ";
        }
        for(int j=n-i+1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }

    1 
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    int count=1;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    A
    AB
    ABC
    ABCD
    ABCDE
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(64+j);
        }
        cout<<endl;
    }

    ABCDE
    ABCD
    ABC
    AB
    A
    for(int i=n; i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<char(j+64);
        }
        cout<<endl;
    }

    A
    BB
    CCC
    DDDD
    EEEEE
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(i+64);
        }
        cout<<endl;
    }

       A
      ABA
     ABCBA
    ABCDCBA
    for(int i=1; i<=n;i++){
        for(int j=i+1;j<=n;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<char(64+j);
        }
        for(int j=i-1;j>0;j--){
            cout<<char(64+j);
        }
        cout<<endl;
    }

    E 
    D E
    C D E
    B C D E
    A B C D E
    for(int i=n; i>=1;i--){
        for(int j=i;j<=n;j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }

    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    for(int i=1; i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        for(int j=1;j<=(i*2)-2;j++){
            cout<<" ";
        }
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n; i>=1;i--){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(int j=(i*2)-2;j>=1;j--){
            cout<<" ";
        }
        for(int j=n-i+1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    for(int i=n; i>=2;i--){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(int j=(i*2)-2;j>=1;j--){
            cout<<" ";
        }
        for(int j=n-i+1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        for(int j=1;j<=(i*2)-2;j++){
            cout<<" ";
        }
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    ****
    *  *
    *  *
    ****
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || j==n || i==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    4444444
    4333334
    4322234
    4321234
    4322234
    4333334
    4444444
    */
    for(int i=n;i>=1;i--){
        for(int j=n;j>i;j--){
            cout<<j;
        }
        for(int j=(i*2)-1;j>=1;j--){
            cout<<i;
        }
        for(int j=i;j<n;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<j;
        }
        for(int j=i;j<=(i*3)-2;j++){
            cout<<i+1;
        }
        for(int j=i+1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

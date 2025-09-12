#include<bits/stdc++.h>
using namespace std;
// if an array is declared globally, it will have all zeros instead of garbage values


// The frequency of an element is the number of times it occurs in an array.
// You are given an integer array nums and an integer k. 
// In one operation, you can choose an index of nums and increment the element at that index by 1.
// Return the maximum possible frequency of an element after performing at most k operations.
int maxFrequency(vector<int>& nums, int k) {
    int max_frequency = 1;
    sort(nums.begin(), nums.end());
    vector<int> temp = nums;
    for (int i = 0; i < nums.size(); i++) { // 4
        int n = k;
        int count = 0;
        for (int j = i - 1; j >= 0 && n > 0; j--) {
            while (temp[j] < temp[i] && n > 0) {
                temp[j]++;
                n--;
            }
        }
        for (int j = 0; j < nums.size(); j++) {
            if (nums[i] == temp[j]) {
                count++;
                if (count == nums.size()) {
                    return nums.size();
                }
            }
        }
        max_frequency = max(max_frequency, count);
        temp = nums;
    }
    return max_frequency;
}

// Given an array, we have found the number of occurrences of each element in the array.
void noOfOccurence(int arr[], int n){
    map<int, int> m;
    // map has complexity of O(log n) whereas an unordered_map has O(1) 
    // unordered_map has worst case time complexity of o(n) which happens very rarely and it happens due to internal collisions
    // this is why the first preference should be unordered_map, If the time limit is exceeded, then use map

    // in a map any data structure like pair, int, float can be a key whereas in unprdered_map only individual data structures can be key
    for(int i=0;i<n;i++){
        m[arr[i]]+=1;
    }
    for(auto &it:m){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
}

int shash[256];
int main(){
    // int n;
    // cout<<"Enter the size of the array: ";
    // cin>>n;
    // int a[n];
    // cout<<"Enter the elements of the array ";
    // for(int i=0; i<n;i++){
    //     cin>>a[i];
    // }
    // int hash[n+1]={0};
    // for(int i=0; i<n;i++){
    //     hash[a[i]] += 1;
    // }

    // the maximum size of an integer array can be 10^6 inside main()... above this, it will give segmentation fault
    // if the array is declared globally it can be of size 10^7
    // if the array is boolean array, it's maximum size can be 10^7 in main() and 10^8 globally

    // string s="abbbbee";
    // for(int i=0; i<s.size();i++){
    //     shash[((int)s[i])-97] += 1; // or shash[s[i]-'a']
    // }
    // for(int i=0;i<256;i++){
    //     cout<<shash[i];
    // }
    // there are at max 256 different characters possible so string hashing is possible but number hashing is limited because of limited size of integer array
    // that is why we use map and unordered_map for number hashing
    // map<int, int> hash;
    // for(int i=0;i<n;i++){
    //     hash[a[i]] += 1;
    // }
    // map<char, int> hash;
    // for(int i=0;i<s.size();i++){
    //     hash[s[i]]+=1;
    // }
    // for(auto it:hash){
    //     cout<<it.first<<"->"<<it.second;
    // }
    // vector<int> x={12, 43, 7394, 33, 823, 8239, 883, 22972};
    // int k=8993;
    // cout<<"The maximum frequency possible: "<<maxFrequency(x, k);
    int arr[8]={12, 43, 7394, 33, 823, 883, 883, 22972};
    int n=sizeof(arr)/sizeof(arr[0]);
    noOfOccurence(arr, n);
}

/* 
There are three methods in hashing
1. Division Method (Linear chaining - done using linked list)
    eg - arr[9] = {2, 5, 16, 28, 139, 38, 48, 28, 18}
    this method will store it in arr[i]%10 place
        0
        1
        2 ->2
        3
        4
        5 ->5
        6 ->16
        7
        8 ->18 ->28 ->28 ->38 ->48 (these are chained in sorted manner using linked list)
        9 ->139
    so if a user wants to find no. of occurences of 28 then it will choose 28%10 which is 8 then it will find 28 in the 8th index

    now, where the collison appears
    eg - arr[9]= {8, 8, 18, 28, 138, 38, 48, 28, 18}
    these all will be stored in the same hash place in a sorted manner
2. Folding method
3. Mid square method
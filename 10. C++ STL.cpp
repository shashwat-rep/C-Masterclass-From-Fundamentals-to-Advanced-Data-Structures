#include<bits/stdc++.h>
using namespace std;

void usepair(){
    pair<int, int> x = {0, 1};
    pair<int, pair<int, int>> y = {2, {3, 4}};
    pair<int, int> arr[] = {{5, 6}, {7, 8}, {9, 10}};
    cout<<x.first; //accessing first value of the pair
    cout<<x.second; //accessing second value of the pair
    cout<<arr[2].second; //accessing second value of the pair from the array
}

void usevector(){
    //for a vector a singly linked list is maintained
    vector<int> x = {1, 2, 3}; // vector works like an array but it's actually better than an array as it's size can be changed anytime 
    cout<<x[1]<<endl;
    vector<int> y; // declaration of a vector
    vector<int> z(5, 100); // a vector having 5 times 100 will created as {100, 100, 100, 100, 100}
    vector<int> a(5); // a vector having 0 5 times will be created as {0, 0, 0, 0, 0}
    vector<pair<int, int>> b;
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<endl;
    }

    b.push_back({90,88});
    b.emplace_back(90, 88); //emplace_back is genreally faster than push_back because in push_back, a temporary object is created and then it is added to the vector, whereas, in emplace_back, no temporary object is created

    //begin() points to the memory address of the first element, end() points to the memory address just after the last value so to print last value, we need to do *(i-1)
    //rend() points to memory address just before the first element, rbegin() points to the memory address of the last element
    for(vector<int>::iterator i = z.begin(); i!= z.end(); i++){ // printing using iterator 
        cout<<*i<<endl; //this iterator object actually points to the memory location not to the actual value 
    }

    for(auto i = z.begin(); i!= z.end(); i++){
        cout<<*i<<endl;
    }
    for(auto i:z){
        cout<<i<<endl;
    }

    //erase() just removes the element from the vector by the taking memory address as parameters
    z.erase(z.begin()+1); //removes the element from the 2nd position of the vector (it takes the moemory location only)
    z.erase(z.begin(), z.begin()+3); //removes the first 3 elements of the vector 

    z.insert(z.begin()+1, 79); //this will insert 79 at the second position
    z.insert(z.begin(), 2, 89);//this will add 89 2 times at the begining 

    z.clear();//clears the entire vector
    z.pop_back();//removes element from the end
    z.swap(x);//swaps the vector z and x
    z.size();//size of the vector
    z.empty();//returns true is vector is not empty else false
}

void uselist(){
    //for a list a doubly linked list is maintained
    list<int> l;
    l.push_back(2);
    l.emplace_back(4);
    l.push_front(1);
    l.emplace_front(0);
    //rest all the functions of vectors are same for list
}

void usedeque(){
    deque<int> dq;
    //all the functions of list can be used with deque as well
}

void usestack(){
    //all the operation takes O(1) time
    stack<int> st;
    st.push(3);
    st.push(7);
    st.emplace(8);
    //{8,7,3}
    st.pop();
    //{7,3}
    cout<<st.top(); //will print 8
    cout<<st.size();
    cout<<st.empty();
    stack<int> st1, st2;
    st1.swap(st2);
}

void usequeue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);
    // {1,2,4}
    q.back(); // will return last element
    q.front();// will return first element
    q.pop();
    // {2,4}
    //size, swap, empty functions are same as in stack
}

void usepriorityqueue(){
    //push and pop operation takes O(log n) time complexity, top takes O(1)
    priority_queue<int> pq;// priority queue arranges elements in ascending order
    pq.push(4);
    pq.push(8);
    pq.push(1);
    pq.emplace(19);
    //{19,8,4,1}
    pq.pop();
    //{8,4,1}
    
    //minimum priority queue (generally known as min heap)
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(4);
    mpq.push(8);
    mpq.push(1);
    mpq.emplace(19);
    //{1,4,8,19}
}

void useset(){
    //set only contains unique elements and in sorted order - ascending
    //every operation takes O(log n) time
    set<int> s;
    s.insert(12);
    s.insert(13);
    s.insert(19);
    s.emplace(13);
    s.insert(12);
    //{12, 13, 19}
    set<int>::iterator it = s.find(13); //auto it = s.find(13);
    //if we s.find(18) then we will get same result as s.end() as 18 is not present and it will return the address space next to the last element in the set
    cout<<*it;
    s.erase(12); //takes lograthihmic time
    s.erase(it); //takes constant time
    auto it2 = s.find(19);
    s.erase(it, it2);
}

void usemultiset(){
    //similar to set but it can store duplicate values .... the property of sorted elements retains
    multiset<int> m;
    m.insert(1);
    m.insert(1);
    m.insert(1);
    m.insert(1);
    m.insert(1);
    //{1,1,1,1,1}
    m.erase(m.find(1));
    //{1,1,1,1}
    auto it1 = m.find(1);
    auto it2 = next(it1,2);
    m.erase(it1,it2);
    //{1}
    m.erase(1); //this will erase all the c=occurrence of 1 in the multiset
    //rest all the functions of set retains
}

void useunorderedset(){
    //same as set, does not stores duplicate elements but stored in unsorted manner
    unordered_set<int> us;
    //in most of the cases the time complexity of O(1) in worst case it's O(n)
    //lower_bound and upper_bound function does not work
}

void usemap(){
    //has key value pair, here keys are unique
    //map works in O(n) time
    map<int, int> m;
    //map stores unique key in sorted order (similat to set)
    //there are three ways to insert an element in a map
    m[1]=2;
    m.insert({5,67});
    m.emplace(2,80);
    // {{1,2}, {2,80}, {5,67}}
    cout<<m[3]; //this will print 0 as it does not exist
    auto it = m.find(2);
    cout<< it->second; //remember this
    //all the other functions are same as above
    //lower and upper_bound functions works just fine for map 
}

void usemultimap(){
    //we can store duplicate keys
    //only map[key] cannot be used here
}

void useunorderedmap(){
    //does not store duplicate key but stores in unsorted manner
    //works in O(1) time but in worst case is O(n)
}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second<p2.second){
        return true;
    }
    if(p1.second>p2.second){
        return false;
    }
    if(p1.first>p1.second){
        return true;
    }
    return false;
}

void sorting(){
    vector<int> v = {12, 6, 87, 65, 7, 8, 9};
    sort(v.begin(), v.end()); // this will sort in ascending order
    sort(v.begin(), v.end(), greater<int>()); // this will sort in descending order
    for(auto it:v){
        cout<<it<<" ";
    }
    int arr[] = {12, 6, 87, 65, 7, 8, 9};
    sort(arr, arr+7);
    sort(arr, arr+7, greater<int>());
    for(auto it:arr){
        cout<<it<<" "; 
    }

    pair<int, int> p[]= {{1,2}, {2,4}, {7,1}, {1,2}};
    sort(p, p+4, comp);

    int n=7;
    int c= __builtin_popcount(n); // counts the no. of 1's (out of 32) in the binary of targeted no.
    cout<<c;
    long long n1=87;
    int c1= __builtin_popcountll(n1);// if the no. is long long
    cout<<c1;

    //to print all the permutations of a string
    string s="1235976";
    sort(s.begin(), s.end());//its important to sort before permutations as lets sat the string was 213, then only 231, 312, 321 will be printed
    // do{
    //     cout<<s<<endl;
    // }while(next_permutation(s.begin(), s.end()));

    int max = *max_element(a, a+size); // to find maximum element in an array
}

int main(){
    // usepair();
    // usevector();
    // uselist();
    // usedeque();
    // usestack();
    // usequeue();
    // usepriorityqueue();
    // useset();
    // usemultiset();
    // useunorderedset();
    // usemap();
    // usemultimap();
    // useunorderedmap();
    sorting();
    return 0;
}
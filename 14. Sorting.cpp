#include<bits/stdc++.h>
using namespace std;
/*
Selection sort
Step - 1 : Select minimum from the array and swap it to the first place(arr[0])
Step - 2 : Select the second from the array - start searching from arr[1] and swap it to second place(arr[1])
    eg : {13, 46, 24, 52, 20, 9}
    after Step-1, {9, 46, 24, 52, 20, 13}
    after Step-2, {9, 13, 24, 52, 20, 46}
    after Step-3, {9, 13, 20, 52, 24, 46}
    after Step-4, {9, 13, 20, 24, 52, 46}
    after Step-5, {9, 13, 20, 24, 46, 52}

The time complexity of selection sort is O(n^2) in all the cases
Space complexity - O(1)
Use case - Useful for sorting small datasets or when memory writes (swaps) are a costly operation
*/
void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

/*
Bubble sort
so in selection sort smaller elementsa are arranged  at first but in bubble sort, larger elements are "bubbled" at the last
eg : {13, 46, 24, 52, 20, 9}
    Iteration-1
        {13, 46, 24, 52, 20, 9}
        {13, 24, 46, 52, 20, 9}
        {13, 24, 46, 52, 20, 9}
        {13, 24, 46, 20, 52, 9}
        {13, 24, 46, 20, 9, 52}
    same will follow for 5 more iterations
The time complexity of selection sort is O(n^2) in worst and average case but O(n) in best case (which will occur when array is already sorted)
Worst case happens when array is sorted in opposite order
Space complexity - O(1)
Use case - highly inefficient for real-world applications due to its poor performance
*/
void bubbleSort(int arr[], int n){
    for(int i=n-1;i>0;i--){
        int swapCount = 0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapCount=1;
            }
        }
        if(swapCount==0){
            break;
        }
    }
}

/*
Insertion sort
It taked an element and places it in its correct position
eg : {13, 46, 24, 52, 20, 9}
    I-1
        {13, 46, 24, 52, 20, 9}
    I-2
        {13, 46, 24, 52, 20, 9}
    I-3
        {13, 46, 24, 52, 20, 9}
        {13, 24, 46, 52, 20, 9}
    I-4
        {13, 24, 46, 52, 20, 9}
    I-5
        {13, 24, 46, 52, 20, 9}
        {13, 24, 46, 20, 52, 9}
        {13, 24, 20, 46, 52, 9}
        {13, 20, 24, 46, 52, 9}
    similaly 9 will go in its right position in 6th iteration
The time complexity of selection sort is O(n^2) in worst and average case but O(n) in best case (which will occur when array is already sorted)
Worst case happens when array is sorted in opposite order
Space complexity - O(1)
Use case - Very efficient for small datasets or for arrays that are almost sorted.
*/
void insertionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            int swap = 0;
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                swap=1; //could've used continue instead of this too but only here not in bubble sort
            }
            if(swap==0){
                break;
            }
        }
    }
}


/*
Merge sort
Follows divide and conquer apporach
Time complexity is O(n logn)
Space complexity is O(n) as a temporary array is maintained
use case - Ideal for large datasets and sorting linked lists because it doesn't rely on random access to elements.
*/
void mergeArr(int arr[], int start, int mid, int end){
    int l=start;
    int r=mid+1;
    int k=0;
    int temp[end-start+1];
    while(l<=mid && r<=end){
        if(arr[l]<=arr[r]){
            temp[k]=arr[l];
            k++;
            l++;
        }else if(arr[r]<arr[l]){
            temp[k]=arr[r];
            k++;
            r++;
        }
    }
    while(l<=mid){
        temp[k]=arr[l];
        k++;
        l++;
    }
    while(r<=end){
        temp[k]=arr[r];
        k++;
        r++;
    }
    for(int i=0;i<k;i++){
        arr[start+i]=temp[i];
    }
}
void mergeSort(int arr[],int start, int end){
    if(start<end){
        int mid = start + (end - start) / 2; //to find mid always remember this as it avoids overflow conditions
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        mergeArr(arr, start, mid, end); // remember to make mergeArr function before the mergeSort
    }
}

void recursiveBubblesort(int arr[],int n){
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    recursiveBubblesort(arr, n-1);
}

void recursiveInsertionsort(int arr[],int n, int n1){
    if(n==1){
        return;
    }
    for(int i=n1-n;i>=0;i--){
        if(arr[i+1]<arr[i]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            continue;
        }
        else{
            break;
        }
    }
    recursiveInsertionsort(arr, n-1, n1);
}

/*
Quick sort
This algorithm chooses a random element in as a pivot and places it in its correct postion in an array.
The elements left to the pivot are all lesser than pivot and vice versa for right hand side
Time complexity is O(n logn) in worse case it is O(n^2) which happens in case of sorted or reversely sorted array
Space complexity is O(log n) in worst case it is O(n) due to recursive stack
Use case - excellent for large, randomly ordered datasets where average-case performance is the most important factor.
*/
int partitionQ(int arr[], int start, int end){
    int pivot=arr[start];
    int i=start;
    int j=end;
    while(i<j){
        while(pivot>=arr[i] && i<end){
            i++;
        }
        while(pivot<=arr[j] && j>start){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp = arr[j];
    arr[j]=arr[start];
    arr[start]=temp;
    return j;
}
void quickSort(int arr[], int start, int end){
    if(start<end){
        int partition = partitionQ(arr, start, end);
        quickSort(arr, start, partition-1);
        quickSort(arr, partition+1, end);
    }
}

int main(){
    int arr[5] = {1, 5, 6, 2, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    // selectionSort(arr, n);
    // bubbleSort(arr,n);
    // insertionSort(arr, n);
    // mergeSort(arr, 0, n-1); // we want to pass the index of the last element not the size of the array
    // recursiveBubblesort(arr, n);
    // recursiveInsertionsort(arr, n, n);
    quickSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
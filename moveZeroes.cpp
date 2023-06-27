#include<bits/stdc++.h>

using namespace std;

// Time Complexity - O(n)
// Space Complexity - O(1)

void moveZeroes(int arr[],int sizeOfArray){

    int n= sizeOfArray;

    // We can use the two pointer approach

    int i=0, j=0;

    while( i < n){
        if( arr[i] !=0){
            arr[j]=arr[i];
            j++;
        }
        i++;
    }

    while( j < n){
        arr[j]=0;
        j++;
    };
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    moveZeroes(arr,n);

    for(int i=0; i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
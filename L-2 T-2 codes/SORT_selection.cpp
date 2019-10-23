#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n){
    int min_i,i;
    min_i=0;
    for(i=0;i<n;i++){
        min_i=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_i])
                min_i=j;
        }
        swap(arr[i],arr[min_i]);
    }
}

int main(){
    int i,n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    for(i=0;i<n;i++){
     cin>>arr[i];
    }
    selectionsort(arr,n);
    cout<<" ** SORTED array **"<<endl;
    for(i=0;i<n;i++){
     cout<<arr[i]<<ends;
    }
    return 0;
}

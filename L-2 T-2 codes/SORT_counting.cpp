/*#include <stdio.h>
#include <string.h>
#define RANGE 255

// The main function that sort the given string arr[] in
// alphabatical order
void countSort(char arr[])
{
    // The output character array that will have sorted arr
    char output[strlen(arr)];

    // Create a count array to store count of inidividul
    // characters and initialize count array as 0
    int count[RANGE + 1], i;
    memset(count, 0, sizeof(count));

    // Store count of each character
    for(i = 0; arr[i]; ++i)
        ++count[arr[i]];

    // Change count[i] so that count[i] now contains actual
    // position of this character in output array
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i-1];

    // Build the output character array
    for (i = 0; arr[i]; ++i)
    {
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }

    // Copy the output array to arr, so that arr now
    // contains sorted characters
    for (i = 0; arr[i]; ++i)
        arr[i] = output[i];
}

// Driver program to test above function
int main()
{
    char arr[] = "geeksforgeeks";//"applepp";

    countSort(arr);

    printf("Sorted character array is %s\n", arr);
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<ends;
    }
}
void counttingsort(int arr[],int n){
    int i,outputarr[n+1],countt[n+1];
    memset(countt,0,n+1);
    printArray(countt,n+1);
    memset(outputarr,0,n+1);
    for(i=0;arr[i];i++)
        ++countt[arr[i]];
    for(i=1;arr[i];i++)
        countt[i]+=countt[i-1];
    for(i=0;arr[i];i++){
        outputarr[countt[arr[i]]]=arr[i];
        --countt[arr[i]];
    }
    for(i=0;i<n;i++)
        arr[i]=outputarr[i];
}


int main(){
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    counttingsort(arr,n);
    printArray(arr,n);
    return 0;
}


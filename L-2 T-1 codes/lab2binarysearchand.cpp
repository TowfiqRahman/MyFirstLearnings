#include <iostream>
#include <stdlib.h>
#include <math.h>
#define ll long long
using namespace std;

int binary_search();
int main(){
    long long int arr[100];
    int n=0;
    cout<<"\t\tEnter number of elements of array: ";
    cin>>n;
    ///sort
    int i,j,k,temp;
    //char a[30];
        cout<<endl<<endl<<"\t Inputs taken from rand functions\n \tThe array is shown below."<<endl;
        for(i=0;i<n;i++){
            arr[i]=rand();
            cout<<ends<<arr[i]<<ends;
            }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if (arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        cout<<endl<<endl<<"\tSorted array :"<<ends;
        for(k=0;k<n;k++)
            cout<<arr[k]<<ends;

    ///search element
    int low_n,hi_n,mid_n,loc=0;
    long long int num;
    cout<<endl<<endl<<"\t\tEnter the number you want to search : "<<ends;
    cin>>num;
    low_n=0;
    hi_n=n;
    mid_n=(hi_n + low_n)/2;
        while(low_n<=hi_n){
            mid_n=(hi_n + low_n)/2;
            if(num==arr[mid_n])
                break;
            else if(num<arr[mid_n])
                hi_n=mid_n - 1;
            else
                low_n=mid_n + 1;
        }
    if(low_n>hi_n)
        cout<<endl<<num<<" is not found in array.. "<<endl;
    else
        cout<<endl<<num<<" is found in the array. It's location is "<<mid_n+1<<endl;
    ///shortest pair
    cout<<"\n\n\tWorking with Pairs of co-ordinates ."<<endl;
    cout<<"\tHow many pairs of input you will workwith ?"<<endl;
    int na;
    cin>>na;
    int loc1,loc2;
    double x[na],y[na],dst=100000;
    double srtstdist=0;
    for(int i=0;i<na;i++){
        x[i]=rand();
        y[i]=rand();
        //    cout<<endl<<"Enter x:";
        //    cin>>x[i];
        //   cout<<endl<<"Enter y:";
        //    cin>>y[i];
    }
    cout<<"\n\tCo-ordinates are :"<<endl;
    for(int i=0;i<na;i++){
        cout<<"\t("<<x[i]<<","<<y[i]<<")"<<endl;
    }
    cout<<endl;
    for(int i=0;i<na;i++){
        for(int j=i+1;j<na;j++){
            srtstdist=sqrt((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]));
            if(srtstdist<dst){
            dst=srtstdist;
            loc1=i;
            loc2=j;
            }
        }
    }
        cout<<endl<<"\t\tShortest Distance is : "<<dst<<ends;
        cout<<endl<<"\tPairs of shortest distant is ";
        cout<<"\tA("<<x[loc1]<<ends<<","<<y[loc1]<<")"<<ends<<"B("<<x[loc2]<<ends<<","<<y[loc2]<<")"<<endl<<endl;

return 0;
}

/*int binary_search(int arr[],int num,int lb,int ub,){
        return loc;
}*/

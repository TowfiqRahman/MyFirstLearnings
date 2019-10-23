#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int i,n,a[10]={1,2,3,5,6,7,8,90,3,5};
    cout<<"enter a num under 10 ";
    cin>>n;
    sort(a,a+10);
    for(i=0;i<10;i++){
       printf("%d ",a[i]);
    }
    return 0;
}

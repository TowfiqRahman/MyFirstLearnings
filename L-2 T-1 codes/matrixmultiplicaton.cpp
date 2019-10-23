#include <iostream>
using namespace std;

int main(){
    int m,n,i,j,k,arr1[10][10],arr2[10][10],res[10][10];
    cout<<"Enter dimention of 1st array - "<<endl<<"Row : ";
    cin>>m;
    cout<<"Column : ";
    cin>>n;
    cout<<"Enter array elements : ";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cin>>arr1[i][j];
    }
    cout<<"SHOW MATRIX A : "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<arr1[i][j]<<ends;
        cout<<endl;
    }

    int p,q;
    cout<<"Enter dimention of 2nd array - "<<endl<<"Row : ";
    cin>>p;
    cout<<"Column : ";
    cin>>q;
    cout<<"Enter array elements : ";
    for(i=0;i<p;i++){
        for(j=0;j<q;j++)
            cin>>arr2[i][j];
    }
    cout<<"SHOW MATRIX B : "<<endl;
    for(i=0;i<p;i++){
        for(j=0;j<q;j++)
            cout<<arr2[i][j]<<ends;
        cout<<endl;
    }

    ///MATRIX MULTIPLICATION///
    if(n!=p)
        cout<<"Matrixs can't be multiplied!!!!!"<<endl;
    else{
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                    int sum=0;
                for(int k=0;k<n;k++){
                    sum=sum+arr1[i][k]*arr2[k][j];
                    cout<<"sum:"<<ends<<sum<<endl;
                }
                res[i][j]=sum;
                /*cout<<res[i][j]<<ends;*/
            }
            cout<<endl;
        }
    }
    cout<<"SHOW MATRIX res : "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<q;j++)
            cout<<res[i][j]<<ends;
        cout<<endl;
    }


return 0;
}

 #include<bits/stdc++.h>
using namespace std;
void merge(int *A, int low, int high,int mid)
{
     int i,j,k, c[50];
     i=low;
     k=low;
     j=mid+1;
     while(i<= mid && j <= high)
     {
         if (A[i] < A[j])
         {
                c[k]=A[i];
                k++;
                i++;
         }
        else{
                c[k]=A[j];
                k++;
                j++;
            }
     }
     while(i <=mid)
       {
           c[k]= A[i];
           k++;
           i++;
       }
     while(j<=high){
         c[k]=A[j];
         k++;
         j++;
       }
       for(i=low;i<k;i++)
            A[i]=c[i];
       return;
}

void mergesort(int *A, int low, int high)
{  int mid;
  if(low<high)
  { mid=(low+high)/2;
    mergesort(A,low,mid);
    mergesort(A,mid+1,high);
    merge(A,low,high,mid); }
  return;
}

int main()
{  int A[10],B[10];
    int i,m,n,l;
    cout<<"How many elements? ";
    cin>>n;
    for(i=0;i<n;i++)
    {  cout<<"A["<<i<<"]= ";
    cin>>A[i]; }
    mergesort(A,0,n-1);
    cout<<"sorted array\n";
    for(i =0;i <n; i++)
    { cout<<"A["<<i<<"]= ";
     cout<<A[i]<<endl; }
     return 0;
}

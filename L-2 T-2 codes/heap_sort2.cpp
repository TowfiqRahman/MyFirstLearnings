#include<bits/stdc++.h>
using namespace std;
void heap(int *a,int i,int n)
{
    int j,temp;
    temp=a[i];
    j=2*i;
    while(j<=n)
    {
        if(j<n&&a[j+1]>a[j])
            j++;
        if(temp>a[j])
            break;
        else if(temp<=a[j])
        {
            a[j/2]=a[j];
            j=2*j;
        }
    }
    a[j/2]=temp;
    return;
}
void heap_sort(int *a,int n)
{
    int i,temp;
    for(i=n;i>=2;i--)
    {
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        heap(a,1,i-1);
    }
}

void build(int *a,int n)
{
    int i;
    for(i=n/2;i>=1;i--)
    {
        heap(a,i,n);
    }
}
main()
{
    int n,i,x,a[20];
    cout<<"enter the number of elements (n) : ";
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    build(a,n);
    heap_sort(a,n);

    cout<<"Output: As in sorted elements"<<endl;

    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
}


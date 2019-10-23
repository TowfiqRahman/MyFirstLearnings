#include<iostream>
#include<map>
using namespace std;
void ks(int n,float w[],float pr[],int cap,map<double,int> e,float rat[])
{
    float x[n],prf=0;
    int i,u,c;
    u=cap;
    for(i=0;i<n;i++) x[i]=0.0;
    for(i=0;i<n;i++)
    {
        if(w[i]>u) break;
        else
        {
            x[i]=1.0;
            prf+=pr[i];
            u-=w[i];
        }
    }
    if(i<n) x[i]=u/w[i];
    {
        prf+=(x[i]*pr[i]);
        c=i;
    }
    for(i=0;i<n;i++) cout<<e[rat[i]]<<" th element was "<<"taken: "<<x[i]<<endl;
    cout<<endl;
    cout<<"Max profit: "<<prf<<endl;
}
main()
{
    int n;
    cout<<"Number of elements: ";
    cin>>n;
    float w[n],pr[n],cap;
    float rat[n];
    map<double,int> e;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<"th elements weight: ";
        cin>>w[i];
        cout<<i+1<<"th elements profit: ";
        cin>>pr[i];
    }
    cout<<"The Capacity of the given bag: ";
    cin>>cap;
    for(int i=0;i<n;i++)
    {
        rat[i]=pr[i]/w[i];
        e[rat[i]]=i+1;
        ///+cout<<e[rat[i]]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(rat[i]<rat[j])
            {
                swap(rat[i],rat[j]);
                swap(w[i],w[j]);
                swap(pr[i],pr[j]);
            }
        }
    }
    ks(n,w,pr,cap,e,rat);
    return 0;
}

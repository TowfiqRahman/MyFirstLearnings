#include <bits/stdc++.h>
using namespace std;

struct edge
{
    int u,v,weight;
}ed[100],MST[100];

int par[100];

bool compare(edge a, edge b)
{
    if(a.weight<b.weight)
    return 1;
    else
    return 0;
}

int find(int a)
{
    if(par[a]==a)
    return a;
    else
    return find(par[a]);
}

bool join_union(int u, int v)
{
    int a,b;
    a=find(u);
    b=find(v);
    if(a==b)
    return 0;
    else
    {
        par[b]=a;//par[a]=b;
        return 1;
    }
}

int main()
{
    cout<<"\t\tALGORIHM: KRUSKAL\n";
    int a,b,c,i,j,k,nd,edg,total;
   cout<<"Enter the no of node & edge:";
    scanf("%d %d",&nd,&edg);
    cout<<"Enter the U V WEIGHT serially:\n";
    for(i=0;i<edg;i++)
        scanf("%d %d %d",&ed[i].u,&ed[i].v,&ed[i].weight);
    for(i=1;i<=nd;i++)
        par[i]=i;
    sort(ed,ed+edg,compare);
    k=0;
    i=0;
    total=0;
    while(i<edg && k<nd-1)
    {
        a=ed[i].u;
        b=ed[i].v;
        c=ed[i].weight;
        if(join_union(a,b))
        {
            MST[k++]=ed[i];
            total+=c;
        }
        i++;
    }
    cout<<"\nMINIMUM WEIGHT:\n";
    printf("%d\n",total);
    cout<<"\nOBTAIN MINIMUM SPANNING TREE BY ADDING THE FOLLOWING EDGES:\n";
    for(i=0;i<k;i++)
    printf("%d %d\n",MST[i].u,MST[i].v);
    return 0;
}

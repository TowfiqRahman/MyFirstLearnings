#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;
    //cin>>value;
    //cin>>weight;


};

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}


double fractionalKnapsack(int W, struct Item arr[], int n)
{

    sort(arr, arr + n, cmp);

    cout<<"Sorted value and weight according to ratio"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout <<"                "<<arr[i].value <<"  :  " << arr[i].weight << "  :  "
             << ((double)arr[i].value / arr[i].weight) << endl;
    }


    int curWeight = 0;
    double finalvalue = 0.0;


    for (int i = 0; i < n; i++)
    {

        if (curWeight + arr[i].weight <= W)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }


        else
        {
            int remain = W - curWeight;
            finalvalue += arr[i].value * ((double) remain / arr[i].weight);
            break;
        }
    }


    return finalvalue;
}


int main()
{
    int n=0;
    double W = 0;
    cout<<"Enter knapsack weight: ";
    cin>>W;
    cout<<"Enter number of items: ";
    cin>>n;
    Item arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter value: ";
        cin>>arr[i].value;
        cout<<"Enter weight: ";
        cin>>arr[i].weight;
    }
    cout<<"Showing values : weights"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout <<"            "<< arr[i].value << "  :  " << arr[i].weight << "  "<< endl;
    }

    cout << "          Maximum value we can obtain = "
         << fractionalKnapsack(W, arr, n);
    return 0;
}

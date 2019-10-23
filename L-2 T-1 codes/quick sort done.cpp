#include <bits/stdc++.h>

#define ll long long
#define MAX 105

using namespace std;

ll arr[MAX], N;

ll partition(ll top, ll bottom)
{
     ll x = arr[top];
     ll i = top - 1;
     ll j = bottom + 1;
     ll temp;

	 while(i<j)
     {
           do
           {
			   j --;
           }while (x < arr[j]);

          do
          {
               i++;
          } while (x >arr[i]);

          if (i < j)
         {
             cout <<endl<<"swap i,j"<< arr[i] <<" " << arr[j] << endl;
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
         }
        for(ll k = 0; k<N; k++)
        cout << arr[k] << " ";
        cout << endl;
	 }

	 return j;
}

void quicksort(ll top, ll bottom)
{
     ll middle;

	 if (top < bottom)
     {
          middle = partition(top, bottom);
          // top and bottom theke middle
//          printf("%lld %lld_f\n",top,bottom);

		  quicksort(top, middle);
		  // sort top partition
//          printf("%lld %lld_s\n",top,bottom);

		  quicksort(middle+1, bottom);
		  // sort bottom partition
//	  	  printf("%lld %lld_l\n",middle+1,bottom);

	 }
}
int main()
{
    cout << "Enter Number of elements : ";
	cin >> N;

	cout << "\nEntered Numbers Are : \n";
	for(ll i = 0; i<N; i++)
    {
        arr[i]=rand();
        cout << arr[i] << " ";
    }
    cout << "\n\n";

	quicksort(0,N-1);

    cout << "Sorted Order : ";
	for(ll i = 0; i<N; i++)
        cout << arr[i] << " ";

	return 0;
}

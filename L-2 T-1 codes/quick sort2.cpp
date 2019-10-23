// dont confuse about top and bottom..and merge sort er moto..but change in partision pore hoi quick sort whr merge sort e age hoi

#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int array[MAX], N;

int partition(int top, int bottom)
{
     int x = array[top];
     int i = top - 1;
     int j = bottom + 1;
     int temp;
        cout<<endl<<"x(array top)="<<x<<", i( top -1)="<<i<<", j(botttom +1)="<<j<<endl;
	 do
     {
           do
           {
			   j --;
			   cout<<ends<<"j--= "<<j<<ends;
           }while (x < array[j]);

          do
          {
               i++;
               cout<<ends<<"i++="<<i<<ends;
          } while (x >array[i]);

          if (i < j)
         {
             cout<<endl<<"array i="<<array[i]<<" array j= "<<array[j]<<endl;
               temp = array[i];
               array[i] = array[j];
               array[j] = temp;
               cout<<endl<<"swap done"<<endl;
         }

    int m;
    for(m=0;m<10;m++)cout<<array[m]<<" ";
        cout<<endl;
	 }while (i < j);

	 return j;
}

void quicksort(int top, int bottom)
{
     int middle;

	 if (top < bottom)
     {
          printf("top = %d bottom= %d_f\n",top,bottom);
          middle = partition(top, bottom);// top and bottom theke middle

		  printf("top = %d bottom= %d_s\n",top,bottom);
		  quicksort(top, middle);// sort top partition

		  printf("top = %d bottom= %d_l\n",top,bottom);
		  quicksort(middle+1, bottom);      // sort bottom partition
	 }
}
int main() {
	int i;

	scanf("%d", &N);

	for(i = 0; i<N; i++)

		scanf("%d",&array[i]);

	quicksort(0,N-1);

	for(i = 0; i<N; i++)

		printf("%d ",array[i]);

	return 0;
}

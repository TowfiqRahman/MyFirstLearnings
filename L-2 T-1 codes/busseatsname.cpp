#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int busseatnumber();
int main(){
    int no;
    no=busseatnumber();
    cout<<no;
return 0;
}
int busseatnumber(){
    int n=0;
char seats[45][3]={"","A1","A2","A3","A4","B1","B2","B3","B4","C1","C2","C3","C4","D1","D2","D3","D4","E1","E2","E3","E4","F1","F2","F3","F4","G1","G2","G3","G4","H1","H2","H3","H4","I1","I2","I3","I4","J1","J2","J3","J4","K1","K2","K3","K4"};
char seat='A';
char seatchoice[3];
int i;
for( i=0;i<11;i++)
    cout<<seat++<<ends;
for( i=1;i<45;i++)
    cout<<seats[i]<<ends;
    bool found=1;
    while(found){
        cout<<" \t\t Chose seat number : ";
            cin>>seatchoice;
        for(i=1;i<45;i++){
            if(!strcmp(seats[i],seatchoice)){
                cout<<endl<<"\t Seat found"<<endl<<"\t your seat is :"<<seats[i]<<endl;
                found=0;
                n=i;
                }
        }
        if(found){
            cout<<endl<<"\t !!! SORRY seat not found. Please enter in Capital Letters !!!"<<endl;
        }
    }
    return n;
}

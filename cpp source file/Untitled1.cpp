#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class student{

public:
    static int noOfStudents;
    string studentNo;
    string name;
    string dob;
    int tarif;
    void display() {
    cout<<"\n"<<studentNo;
    cout<<"\t\t"<<name;
    cout<<"\t\t"<<dob;
    cout<<"\t\t"<<tarif;
    }
   student(){
       noOfStudents++;
   studentNo="Not Known";
   name="Not Known";
   dob="1st January 1995 ";
   tarif=20;
   }
   student(string n,string na,string d,int k){
       noOfStudents++;
   studentNo=n;
   name=na;
   dob=d;
   tarif=k;
   }
};

int student::noOfStudents;
main(){
string name,no,dob;
int k,l;

int i=0;
student *s[100],*s1,*s2;
while(1){
cout<<"\nPress\n\t1 for creating student instance with unknown value.\n\t2 for creating student instance with known value\n\t3 to display.\n\t4 to exit.";
cout<<"\nEnter Your Choice: ";
cin>>l;
switch(l){

case 1:
    s1=new student;
    s[i]=s1;
    i++;
    break;
case 2:
    cout<"\nEnter Student details:";
    cout<<"\n\tStudent No: ";
    cin>>no;
    fflush(stdin);
    cout<<"\n\tName: ";
    cin>>name;
    fflush(stdin);
    cout<<"\n\tDate of Birth: ";
    cin>>dob;
    fflush(stdin);
    cout<<"\n\tTarrif Points: ";
    cin>>k;
    if(k<20||k>280){
        cout<<"\n\n\tInvalid Tariff Point.\n\tPlease enter the correct Tariff Point:";
        cin>>k;}
    s2=new student(no,name,dob,k);
    s[i]=s2;
    i++;
break;
case 3:
 cout<<"\nStudent No\t\tName\t\tDate of Birth:\t\tTariff Points:";
for(i=0;i<student::noOfStudents;i++){
s[i]->display();}
cout<<"\n\nNumber of Instance Created: "<<student::noOfStudents<<"\n";
break;
case 4:
    exit(0);
    break;
default:
    cout<<"\nWrong Choice";
}
}
return 0;
}

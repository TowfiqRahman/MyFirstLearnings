#include <iostream>
#include <string>
#include <streambuf>
#include <fstream>
#include <string.h>
#include <stdio.h>
using namespace std;

class student
{
    char no[10],name[10],birth[20],p[20];
    int point;

public:
    static int noOfStudents;
    student()
    {
        strcpy(no,"unknown");
        strcpy(name,"unknown");
        strcpy(birth,"1st January 1995");
        point=20;
    }
    void sets(char no1[],char name1[],char birth1[],int point1)
    {
        strcpy(no,no1);
        strcpy(name,name1);
        strcpy(birth,birth1);
        point=point1;
        strcpy(p,"invalid");

    }
    friend void press(void);
    friend void show(void);

    void display(void)
    {
        //if(point>=20 && point <=280)
        printf("%10s %10s %20s %10d\n",no,name,birth,point);
        //else
         //   printf("%10s %10s %20s %10s\n",no,name,birth,p);
    }

};
int student :: noOfStudents;

void press (void)
    {
        cout << "press" << endl;
        cout << "\t1 for creating student instance with unknown value." << endl;
        cout << "\t2 for creating student instance with known value." << endl;
        cout << "\t3 to display." << endl;
        cout << "\t4 to exit." << endl;
        cout << "Enter Your Choice: ";
    }
    void show(void)
    {
        cout << "Student NO         Name          Date of Birth               Tariff"<< endl;

    }
int main()
{
    int i,j=0,k;
    char no[10],name[10],birth[20];
    int point;
    student x[100];
    press();
        cin >> i;
        while(i!=4)
        {

            if(i==1)
            {
                student x[j];
                j++;
                student::noOfStudents++;
                cout << endl;
            }
            else if(i==2)
                {cout << "Enter Student Details:"<< endl;
                cout << "\tStudent No: ";
                cin >> no;
                cout << "\tName: ";
                cin >> name;
                cout << "\tDate of Birth: ";
                getchar();
                gets(birth);

                cout << "\tTarrif Points: ";
                cin >> point;
                while(point<20 || point>280 )
                {
                    cout << "\tInvalid Tariff point."<< endl;
                    cout << "\tTarrif Points: ";
                cin >> point;
                }
                x[j].sets(no,name,birth,point);
                j++;
                student::noOfStudents++;
                cout << endl;
                }
            else if(i==3)
                {
                show();
                for(k=0;k<j;k++)
                {
                    x[k].display();
                }
                cout << endl;
                cout << "Number of Instance Created: " << student::noOfStudents << endl<< endl;
                }

            press();
            cin>>i;
        }

    return 0;
}

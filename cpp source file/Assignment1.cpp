#include <iostream>
#include <string>
#include <streambuf>
#include <fstream>
#include <string.h>
#include <math.h>
#define pi 2*acos(0)
#include <stdlib.h>
#include <iomanip>
using namespace std;

double tarea=0,tvolume=0;
class shape
{
public:
    int r,x,y;
    double area=0,volume=0;
    char type[15];
    virtual double getarea(void);
    virtual double getvolume(void);
    shape();
    ~shape();
};
shape :: shape()
{

}
shape :: ~shape()
{

}
double shape :: getarea(void)
{
    return 0;
}

double shape :: getvolume(void)
{
    return 0;
}

void choice (void)
{
    cout << endl;
    cout << "Choose Shape:\n1.Circle\n2.Rectangle" << endl;
    cout << "Your Choice: ";
}

void result(void)
{
    cout << endl;
    cout << "1.View Individual Result\n2.View Sum of Area & Volume\n3.View Full Result" << endl;
    cout << "Your Choice: " ;
}
class circle : public shape
{

public:
    circle();
    double getarea (void);
    friend istream & operator  >> (istream &in, circle &p);
};

istream & operator >> (istream &in,circle &p)
{
    cout << "Radius: ";
    in >> p.r;
}

circle :: circle()
{
    strcpy(type,"Circle");
}

double circle :: getarea (void)
{
    return pi*r*r;
}

class rectangle : public shape
{
public:
    rectangle();
    double getarea(void);
    friend istream & operator >> (istream &in,rectangle &p);
};
istream & operator >> (istream &in,rectangle &p)
{
    cout << "Enter 'x' = ";
    in >> p.x;
    cout << "Enter 'y' = ";
    in >> p.y;
}
rectangle :: rectangle()
{
    strcpy(type,"Rectangle");
}
double rectangle :: getarea(void)
{
    return x*y;
}

int main()
{

    shape *smp[100];
    circle *p;
    rectangle *q;
    int i;
    int numberofshapes;

    ifstream fin("shape.txt");
    fin >> numberofshapes;
    cout << "Total shapes created : "<< numberofshapes << endl<<endl;
    for(i=0;i<n;i++){
        char a[numberofshapes][15];
        int t[numberofshapes];
        double ar[numberofshapes],vl[numberofshapes];
        fin>>t[iumberofshapes];
        fin>>a[iumberofshapes];
        fin>>ar[iumberofshapes];
        fin>>vl[iumberofshapes];
        cout<<setw(10)<<left<<t[i]<<setw(10)<<left<<a[i]<<setw(10)<<left<< ar[i] << setw(10)<<left<<vl[i];
        cout<<endl;
    }
    double tar=0,tvl=0;
    fin>>tar>>tvl;
    cout<<endl<<setw(10)<<tar<<setw(10)<<tvl;
    fin.close();
    return 0;
}

#include <iostream>
#include <streambuf>
#include <fstream>
#include <string.h>
#include <math.h>
#define pi 2*acos(0)
#include <stdlib.h>
#include <iomanip>
using namespace std;

double area=0,volume=0;
class shape
{
public:
    int r,x,y;
    char type[15];
    virtual double area(void);
    virtual double volume(void);
    shape();
    ~shape();
};
shape :: shape()
{

}
shape :: ~shape()
{

}
double shape :: area(void)
{
    return 0;
}

double shape :: volume(void)
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
    double area (void);
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

double circle :: area (void)
{
    return pi*r*r;
}

class rectangle : public shape
{
public:
    rectangle();
    double area(void);
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
double rectangle :: area(void)
{
    return x*y;
}

int main()
{

    shape *smp[100];
    circle *p;
    rectangle *q;
    int n,m,i,j,c;

//    ifstream fin("shape.txt");
//    fin >> n >> smp[0]-> type >> smp[0]->r;
//    fin >> smp[1]-> type >> smp[1]->x >> smp[1]->y;
//    fin >> area >> volume ;
//    fin.close();

    cout << "Number of shapes : ";
    cin >> n;
    for(i=0;i<n;i++)
    {
        choice();
        cin >>c;
        cout << "\nShape " << i+1 << ":" << endl;
        switch(c)
        {
        case 1:
            p= new circle;
            cin >> *p;
            smp[i]=p;
            break;
        case 2:
            q=new rectangle;
            cin >> *q;
            smp[i]=q;
            break;
        default:
            cout << "Invalid Choice." <<endl;
            i--;
            break;
        }
    }
    result();
    cin >> m;
    if(m==1)
    {
        cout << setw(5) << "No." << setw(10) << "Type" << setw(10) << "Area" << setw(10) << "Volume" << endl;
        for(i=0;i<n;i++)
        {
            cout << setw(5) << (i+1) << setw(10) << smp[i]->type << setw(10) << smp[i]->area() << setw(10) << smp[i]->volume() << endl;
        }
    }
    else if(m==2)
    {
        double area=0;
        double volume=0;
        for(i=0;i<n;i++)
        {
            area+=smp[i]->area();
            volume+=smp[i]->volume();
        }
        cout << "Sum of Area: " << area << "\nSum of Volume: " << volume << endl << endl;
    }

    else if(m==3)
    {
        cout << endl;
        cout << setw(5) << "No." << setw(10) << "Type" << setw(10) << "Area" << setw(10) << "Volume" << endl;
        for(i=0;i<n;i++)
        {
            cout << setw(5) << (i+1) << setw(10) << smp[i]->type << setw(10) << smp[i]->area() << setw(10) << smp[i]->volume() << endl;
        }
        cout << endl;
        double area=0;
        double volume=0;
        for(i=0;i<n;i++)
        {
            area+=smp[i]->area();
            volume+=smp[i]->volume();
        }
        cout << "Sum of Area: " << area << "\nSum of Volume: " << volume << endl << endl;
    }
    ofstream fout("shape.txt");
    fout << n << endl;

        for(i=0;i<n;i++)
        {
            if(!strcmp(smp[i]->type,"Circle"))
            {
                fout << left << setw(15) << smp[i]->type << left << setw(10) << smp[i]->r  << endl;
            }
            else if(!strcmp(smp[i]->type,"Rectangle"))
            {
                fout << left <<  setw(15) << smp[i]->type << left << setw(10) << smp[i]->x<< left << setw(10) << smp[i]->y << endl;
            }
        }
        fout << endl;
        area=0;
        volume=0;
        for(i=0;i<n;i++)
        {
            area+=smp[i]->area();
            volume+=smp[i]->volume();
        }
    cout.unsetf(ios :: left);
    fout << setw(10) << left << area << setw(20) << volume << endl << endl;
    fout.close();
    return 0;
}

#include<iostream>
#include<cstdlib>
#define PI 3.1416

using namespace std;

class calculate
{
private:
    static int sum;      /// declaire them as member of calculate;;;;;
    static int vol;
    static double csum;
    int x,y,z;
    int a,b,h;
    int radius;
public:
    void display()
    {
        cout << "Choose one of this" << endl <<
             "  1. Calculate Cube" << endl <<
             "  2. Calculate Circle" << endl <<
             "  0. Add & Exit" << endl << endl;
    }

    void dis_add()
    {
        cout << "Sum of cube area: " << sum << endl;
        cout << "Sum of cube volume: " << vol << endl;
        cout << "Sum of circle area: " << csum << endl;
        exit(0);
    }

    friend class cube;
    friend class circle;
};

    int calculate::sum=0;       ///static members are to be defined here...
    int calculate::vol=0;
    double calculate::csum=0;

class cube : virtual public calculate
{
public:
    int input()
    {
        cout << "Enter cube dimension: (x, y, z) " ;
        cin >> x >> y >> z;
    }
    int area()
    {
        int ar;
        ar = x*y+y*z+z*x;
        return ar;
    }
    int volume()
    {
        int vol;
        vol = x*y*z;
        return vol;
    }
    void cube_calc()
    {
                                            ///omit static members declarations here not needed as calculate is inherited
        input();
        cout << "Cube area: " << area() << endl << endl;
        sum=sum+area();
        cout << "Cube volume: " << volume() << endl << endl;
        vol=vol+volume();
    }
};

class circle : virtual public calculate
{
public:
    int input()
    {
        cout << "Enter circle dimension:" << endl << "Radius: ";
        cin >> radius;
    }
    float area()
    {
        float ar;
        ar = PI * radius * radius;
        return ar;
    }
    float circle_calc()
    {                                       ///omit declraion here also...
        input();
        cout << "Circle area: " << area() << endl << endl;
        csum=csum+area();
        return csum;
    }
};

int main()
{
    int choice;
    calculate dis;
    cube cu;
    circle cir;
    while(1)
    {
        dis.display();
        cout << "Your choice: ";
        cin >> choice;
        if(choice==1)
            cu.cube_calc();

        else if(choice==2)
            cir.circle_calc();

        else if(choice==0)
            dis.dis_add();


    }
    return 0;
}

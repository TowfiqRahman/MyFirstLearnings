                        ///*********************///
                        ///    Towfiq Rahman    ///
                        ///       1404054       ///
                        ///     Section  A      ///
                        ///*********************///
#include <iostream>
#include <fstream>
#include <string.h>
#include <math.h>
#define pi 2*acos(0)
#include <iomanip>
using namespace std;
double tarea=0,tvolume=0;
int n;
class shape{
protected:
    int x=0,y=0,z=0;
public:
    double area=0,volume=0;
    static int tshapes;
    char type[15];
    virtual double getarea(void);
    virtual double getvolume(void);
    shape();
    ~shape();
};
static int tshapes=0;
shape :: shape(){
}
shape :: ~shape(){
}
double shape :: getarea(void){
    return area;
}
double shape :: getvolume(void){
    return volume;
}
class circle_sphere:public shape
{
public:
    circle_sphere();
    double getarea();
    double getvolume();
    friend istream &operator>>(istream &stream,circle_sphere &ob);
};
circle_sphere :: circle_sphere(){
    strcpy(type,"Circle_Sphere");
}
istream &operator>>(istream &stream,circle_sphere &ob)
{   cout<<endl<<setw(15)<<"\tCircle_Sphere"<<endl;
    cout<<"  Radius = ";
    stream>>ob.x;
    return stream;
}
double circle_sphere::getarea()
{
    return 4*pi*x*x;
}
double circle_sphere::getvolume()
{
    return (4/3)*pi*x*x*x;
}
class cylinder:public shape
{
public:
    cylinder();
    double getarea();
    double getvolume();
    friend istream &operator>>(istream &stream,cylinder &ob);
};
cylinder :: cylinder(){
    strcpy(type,"Cylinder");
}
istream &operator>>(istream &stream,cylinder &ob)
{   cout<<endl<<setw(15)<<"\tCylinder"<<endl;
    cout<<"  Height = ";
    stream>>ob.x;
    cout<<"  Radius = ";
    stream>>ob.y;
    return stream;
}
double cylinder::getarea()
{
    return 2*((pi*y*x)+(pi*y*y));
}
double cylinder::getvolume()
{
    return pi*y*y*x;
}
class circle : public shape{
public:
    circle();
    double getarea (void);
    friend istream & operator  >> (istream &in, circle &p);
};
istream & operator >> (istream &in,circle &p){
    cout<<endl<<setw(15)<<"\tCircle"<<endl;
    cout << "   Radius = ";
    in >> p.x;
    return in;
}
circle :: circle(){
    strcpy(type,"Circle");
}
double circle :: getarea (void){
    area=pi*x*x;
    return area;
}
class rectangle : public shape{
public:
    rectangle();
    double getarea(void);
    friend istream & operator >> (istream &in,rectangle &p);
};
istream & operator >> (istream &in,rectangle &p){
    cout<<endl<<setw(15)<<"\tRectangle"<<endl;
    cout << "   Length = ";
    in >> p.x;
    cout << "   Breadth = ";
    in >> p.y;
    return in;
}
rectangle :: rectangle(){
    strcpy(type,"Rectangle");
}
double rectangle :: getarea(void){
    area=x*y;
    return area;
}
class triangle : public shape{
public:
    triangle();
    double getarea(void);
    friend istream& operator>>(istream& in,triangle &a);
};
triangle :: triangle(){
    strcpy(type,"Triangle");
}
double triangle ::getarea(void){
	area=0.5*x*y;
	return area;
}
istream& operator>>(istream& in,triangle &a){
	cout <<endl<< setw(15)<<"\tTriangle"<< endl;
	cout << "   Base = ";
	in >> a.x;
	cout << "   Height = ";
	in >> a.y;
	return in;
}
class cube: public shape{
public:
    cube();
	double getarea(void);
	double getvolume(void);
	friend istream& operator>>(istream& in,cube &a);
};
cube :: cube(){
    strcpy(type,"Cube");
}
double cube ::getarea(void){
    area=(x*y+y*z+z*x)*2.0;
	return area;
}
double cube::getvolume(void){
	volume=x*y*z*1.0;
	return volume;
}
istream& operator>>(istream& in,cube &a){
	cout <<endl<< setw(15)<<"\tCube"<< endl;
	cout << "   Hight = ";
	in >> a.x;
	cout << "   Width = ";
	in >> a.y;
	cout << "   Depth = ";
	in >> a.z;
	return in;
}
void choiceshape (void){
    cout << endl;
    cout <<"\tChoose Shape:\n\t1.Triangle\n\t2.Cube\n\t3.Rectangle\n\t4.Circle\n\t5. Circle sphere\n\t6. Cylinder" << endl;
    cout <<endl<< "\t Your Choice -----> ";
}
void choicework (void){
    cout << endl<<"\t::::::::::Chose what you want to do ::::::::::"<<endl<<endl;
    cout << "\t0. To exit\n\t1. View Individual Result\n\t2. View Sum of Area & Volume\n\t3. View Full Result\n\t4. To write in a file\n\t5. To read from file\n\t6. To search & show using serial number\n\t7. To edit existing data" << endl;
    cout <<endl<< "  Your Choice : " ;
}
int main()
{
    shape *sample[100];
    circle *p;
    rectangle *q;
    triangle *t;
    cube *cu;
    circle_sphere *cs;
    cylinder *cy;
    int i;
    cout << endl<<"     ======== Please enter data ========"<<endl<<endl<<"\tNumber of shapes : ";
    cin >> n;
    for(i=0;i<n;i++){
        choiceshape();
        int c;
        cin >>c;
        cout << "\n   Shape " << i+1 << " : " << endl;
        switch(c){
        case 1:
            t= new triangle;
            cin >> *t;
            sample[i] = t;
            break;
        case 2:
            cu = new cube;
            cin >> *cu;
            sample[i] = cu;
            break;
        case 3:
            q=new rectangle;
            cin >> *q;
            sample[i]=q;
        break;
        case 4:
            p= new circle;
            cin >> *p;
            sample[i]=p;
        break;
        case 5:
            cs= new circle_sphere;
            cin >> *cs;
            sample[i]=cs;
        break;
        case 6:
            cy= new cylinder;
            cin >> *cy;
            sample[i]=cy;
        break;
        default:
            cout << "Invalid Choice." <<endl;
            i--;
            break;
        }
    }
    int match;
    while(1){
        choicework();
        cin >> match;
        if (match==0)
            break;
        else if(match>7)
            cout<<"     !!!!!! Invalid choice !!!!!! "<<endl;
        else if(match==1){
            for(i=0; i<n; i++){
                cout << "No."<<setw(5)<<left<<(i+1)<<" Type : "<<setw(13)<<left<< sample[i]->type <<" Volume : "<< setw(10)<<left<< sample[i]->getvolume() <<" Area : "<<setw(10)<<left<< sample[i]->getarea()<< endl;
            }
        }
        else if(match==2){
            tarea=0;
            tvolume=0;
            for(i=0; i<n; i++){
                tarea+=sample[i]->getarea();
                tvolume+=sample[i]->getvolume();
            }
            cout <<endl <<"Sum of Area: " << tarea << "\nSum of Volume: " << tvolume << endl << endl;
        }
        else if (match==3){
            cout << endl<<endl;
            for(i=0; i<n; i++){
                cout << "No."<<setw(5)<<left<<(i+1) <<" Type : " <<setw(13)<<left<< sample[i]->type <<" Volume : " <<setw(10)<<left<< sample[i]->getvolume() <<" Area : "<< setw(10)<<left<< sample[i]->getarea() << endl;
            }
            cout << endl;
            tarea=0;
            tvolume=0;
            for(i=0; i<n; i++){
                tarea+=sample[i]->getarea();
                tvolume+=sample[i]->getvolume();
            }
            cout << "  ** ** ** Sum of Area: " << tarea << " ** ** **\n\n  ** ** ** Sum of Volume: " << tvolume << " ** ** **"<<endl << endl;
        }
        else if(match==4){
            ofstream fout("shape.txt");
            if(!fout){
                cout<<"File is not open try again"<<endl;
            }
            else{
                fout << n << endl;
                for(i=0; i<n; i++){
                        fout << setw(5) << i+1 << setw(20) << sample[i]->type << setw(10) << sample[i]->getvolume()<< setw(10) << sample[i]->getarea()  << endl;
                }
                fout << endl;
                tarea=0;
                tvolume=0;
                for(i=0; i<n; i++){
                    tarea+=sample[i]->getarea();
                    tvolume+=sample[i]->getvolume();
                }
                cout.unsetf(ios :: left);
                fout << setw(10) << left << tarea << setw(20) << tvolume << endl << endl;
                fout.close();
                cout<<endl<<endl<<"======Data has been written in file======"<<endl<<endl;}
        }
        else if(match==5){
            int nu;
            ifstream fin("shape.txt");
            if(!fin){cout<<"Invalid file . Write in file first"<<endl;}
            else{
                fin >> nu;
                cout <<endl<<endl<<"=========>Total shapes created : "<< nu <<endl<<endl;
                for(i=0; i<nu; i++){
                    char a[nu][20];
                    int t[nu];
                    double ar[nu],vl[nu];
                    fin>>t[i];
                    fin>>a[i];
                    fin>>vl[i];
                    fin>>ar[i];
                    cout<<"No. "<<setw(5)<<left<<t[i]<<"Type : "<<setw(20)<<left<<a[i]<<"Volume = "<<setw(10)<<left<< vl[i] <<"Area = "<< setw(10)<<left<<ar[i];
                    cout<<endl;
                }
                double tar=0,tvl=0;
                fin>>tar>>tvl;
                cout<<endl<<"  ** ** Total Area = "<<setw(10)<<tar<<" ** **\n  ** ** Total Volume = "<<setw(10)<<tvl<<" ** **"<<endl;
                fin.close();}
        }
        else if(match==6){
            cout<<endl<<"\tSerial number = ";
            int serialnum;
            cin>>serialnum;
            while(1){
                if(serialnum==0 || serialnum > n){
                    cout<<endl<<"\t!*!*!*!*!Invalid serial number!*!*!*!*! \n\t-----> Enter valid serial number = ";
                    cin>>serialnum;}
                else
                    break;
            }
            int i=serialnum;
            cout << "No."<<setw(5)<<left<< i <<" Type : " <<setw(13)<<left<< sample[i-1]->type <<" Volume : " <<setw(10)<<left<< sample[i-1]->getvolume() <<" Area : "<< setw(10)<<left<< sample[i-1]->getarea() << endl;
        }
        else if(match==7){
            cout<<endl<<"\tSerial number = ";
            int serialnum;
            cin>>serialnum;
            while(1){
                if(serialnum==0 || serialnum > n){
                    cout<<"\n\t!*!*!*!*!Invalid serial number!*!*!*!*! \n\n\t-----> Enter valid serial number = ";
                    cin>>serialnum;}
                else
                    break;
            }
        int i=serialnum;
        int editchoice=1;
           while(editchoice){
                choiceshape();
                int c;
                cin >>c;
                switch(c){
                case 1:
                    t= new triangle;
                    cin >> *t;
                    sample[i-1] = t;
                    editchoice=0;
                    break;
                case 2:
                    cu = new cube;
                    cin >> *cu;
                    sample[i-1] = cu;
                    editchoice=0;
                    break;
                case 3:
                    q=new rectangle;
                    cin >> *q;
                    sample[i-1]=q;
                    editchoice=0;
                    break;
                case 4:
                    p= new circle;
                    cin >> *p;
                    sample[i-1]=p;
                    editchoice=0;
                    break;
                 case 5:
                    cs= new circle_sphere;
                    cin >> *cs;
                    sample[i]=cs;
                    editchoice=0;
                    break;
                case 6:
                    cy= new cylinder;
                    cin >> *cy;
                    sample[i]=cy;
                    editchoice=0;
                    break;
                default:
                    cout <<endl<<"\t\t!!!Invalid Choice.!!!" <<endl;
                    break;
                }
            cout<<endl<<endl<<"\t*******Showing edited data********"<<endl<<endl;
            cout << "No."<<setw(5)<<left<<i <<" Type : " <<setw(20)<<left<< sample[i-1]->type <<" Volume : " <<setw(10)<<left<< sample[i-1]->getvolume() <<" Area : "<< setw(10)<<left<< sample[i-1]->getarea() << endl;
            tarea=0;
            tvolume=0;
            for(i=0; i<n; i++){
                tarea+=sample[i]->getarea();
                tvolume+=sample[i]->getvolume();}
            }
        }
    }
    return 0;
}

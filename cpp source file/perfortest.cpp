#include <iostream>
#include <string>
using namespace std;

class student{
public:
string student_no,studentname,a,b,c,dateofbirth;
int tarrif=20;
static int instance;
int choice=1;
student(){
    instance++;
}
void getinfo(int choice){
    instance++;
    if(choice==1){
        studentname = "Not Known";
        tarrif =20;
    }
    if(choice==2){
        cout<<"Enter Student Details:"<<endl;
        cout<<"\tStudent No:";
        cin>>student_no;
        cout<<"\n\tName :";
        cin>>studentname;
        cout<<"\n\tDate of birth:";
        cin>>a>>b>>c;
        cout<<"\n\tTariff Points:";
        cin>>tarrif;
        if(tarrif>280 || tarrif <20){
            cout<<"Invalid Tarrif point"<<endl<<"please enter correct Tarrif point:";
            cin>>tarrif;
        }
        else if(tarrif<20){
            cout<<"Invalid Tarrif point"<<endl<<"please enter correct Tarrif point:";
            cin>>tarrif;
        }

        cout<<endl<<endl;
    }
}

void showinfo(){
        cout<<"\t"<<student_no<<"\t"<<studentname<<"\t"<<a<<" "<<b<<" "<<c<<" "<<"\t"<<tarrif<<endl;
        cout<<endl<<endl;
}

};
int student ::instance=0;
int main(){
int n,i,j,choice;
student p[10];
for(i=0;i<10;i++){
    cout<<"Press\n\t1 for creating student instance with unknown value\n\t 2 for creating student instance with known value.\n\t 3 for to display\n\t to exit."<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice){
    case 1:
        p[i].getinfo(choice);
        break;
    case 2:
        p[i].getinfo(choice);
        break;
    case 3:
    cout<<"Displaying Student Details:"<<endl;
    cout<<"\tStudent No  \t Name \t Date of birth \t Tariff points"<<endl;
        for(j=0;j<=i;j++){
            p[j].showinfo();
        }
        cout<<"\nNumber of instance created:"<<p[i].instance<<endl;
        break;
    case 4:
        return 0;
    }
}
return 0;
}

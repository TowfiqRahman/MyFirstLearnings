#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
   // cout.unsetf(ios :: skipws | ios :: dec);
    cout.setf(ios :: scientific | ios::showbase | ios::right);
    char z[15][15]={"stdio","dec1","fixed1","hex1","internal1","left1","oct1","right1","scientific1","showbase1","showpoint1","showpos1","skipws1","unitbuf1","upercase1"};
    ///int f=cout.flags();
    ios::fmtflags f;
    f=cout.flags();
    int i,j;
    for(i=0,j=1;j<=0x4000;i++,j=j<<1)
    {
        if(f & j)
        {
            cout << z[i] << " is set   <----------" << endl;
        }
        else
        {
            cout << z[i] << " is not set" << endl;
        }
    }
    char deca[10]="dec : ",hexa[10]="hex : ",octa[10]="oct : ";
    i=0x4000;
    cout.setf(ios::internal);
    cout<<endl<<setprecision(2)<<setfill('.')<<setw(10)<<dec<<left<<deca<<i<<setw(10)<<hex<<hexa<<i<<setw(10)<<octa<<oct<<i;

    return 0;
}

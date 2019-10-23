#include <iostream>
using namespace std;

class cl {
private:
    static int value;
    static int double_value();
public:
    cl(int i) { val=i; }
    int val;
    int double_val(){return val+val;}
    int fun(){
    return double_value();}
};
int cl::value=10;
int cl::double_value() {  return value+value; }
main()
{
    int cl::*data;                          /// data member pointer
    int (cl::*func)();                      /// function member pointer

    cl ob1(1), ob2(2);                      /// create objects
    data = &cl::val;                        /// get offset of val
    func = &cl::double_val;                 /// get offset of double_val()
    cout << "Here are values: ";
    cout << ob1.*data << " " << ob2.*data << "\n";
    cout << "Here they are doubled: ";
    cout << (ob1.*func)() << " ";
    cout << (ob2.*func)() << "\n";

    cl *p1, *p2;
    p1 = &ob1;                              /// access objects through a pointer
    p2 = &ob2;
    data = &cl::val;                        /// get offset of val
    func = &cl::double_val;                 /// get offset of double_val()
    cout << "Here are values: ";
    cout << p1->*data << " " << p2->*data << "\n";
    cout << "Here they are doubled: ";
    cout << (p1->*func)() << " ";
    cout << (p2->*func)() << "\n";

    cl a(19);
    cout<<a.fun();

    return 0;
}

    /*Output:
    Here are values: 1 2
    Here they are doubled: 2 4*/

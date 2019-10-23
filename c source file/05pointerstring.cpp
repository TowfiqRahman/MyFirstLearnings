#include <iostream>
#include <string.h>
using namespace std;
class stringlength{
public:
    char *p;
    void print(void){
        cout<<"\t"<<p<<"\t length is:"<< strlen(p)<<endl;
    }
    stringlength(){
        p = new char[50];
    }
};

int main (){
    stringlength str1,str2;
    strcpy(str1.p,"string 1 is : how are you?");
    strcpy(str2.p,"string 2 is : i am fine.");
    cout << "before assining "<<endl;
    str1.print();
    str2.print();
    str2=str1;
    strcpy(str1.p,"this is assigned to str1");
    cout<< "after assigning"<<endl;
    str1.print();
    str2.print();
    return 0;
}

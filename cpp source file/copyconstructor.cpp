
///does not work...
#include <iostream>
#include <string.h>

using namespace std;

class stringlength{
public:
    char *p;
    void print(void){
        cout<<"\t"<<p<<"\tlength is :"<<strlen(p)<<endl;
    }
    stringlength(){
        p=new char[60];
    }
    stringlength(const stringlength &str);
};

stringlength::stringlength(const stringlength &str){
    strcpy(p,str.p);
}

int main(){
    stringlength str1;
    strcpy(str1.p,"str1:asdfg");
    cout<<"before assining"<<endl;
    str1.print();

    stringlength str2=str1;
    strcpy(str1.p,"str1:poiuytre");
    cout<<endl<<"after assining"<<endl;
    str1.print();
    str2.print();
return 0;
}

#include <iostream>
#include <string.h>                       //code to kaj kore na//???????????

using namespace std;

class stringlength{
public:
    char *p;
    void Print(){
        cout <<"\t" << p << "\tlength is: " << strlen(p) << endl;
        }
    stringlength(){
            p=new char[50];
        }
    stringlength(stringlength &str);
};
stringlength::stringlength(stringlength &str){
    strcpy(p,str.p);
}
int main (){
    stringlength str1;
    strcpy(str1.p,"str1 towfiq");
    cout << "before assining"<<endl;
    str1.Print();
    stringlength str2=str1;                          //stringlength str2=str1 dile pogram crsh kore why????
    //str2 = str1;
    strcpy(str1.p,"str1:towfiq1 ");
    cout << "\n \n after assining:\n";
    str1.Print();
    str2.Print();

    return 0;
}

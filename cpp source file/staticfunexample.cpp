#include <iostream>
using namespace std;

class sample{
public:
static int totobj;
static void printinfo(){
cout<<"total obj : "<<totobj<<endl;
}
};

int sample::totobj=0;
int main(){
sample::totobj=10;
sample::printinfo();
return 0;}

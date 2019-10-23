#include<iostream>
#include<cstring>

using namespace std;
class example{
    int x,y;
public:
    example(){ };
    example(int i,int j){ x=i;y=j; }
    void show();
    void show1();
    friend example operator+(int &m,example &o);
    friend int operator>(example &o,example &p);
    example operator=(example p);
    friend example operator++(example &o);
    friend example operator++(example &o,int no_use);
    //friend example operator +(example &o);
    friend example operator -(example &o);
};
//example operator +(example &o){
//return o(+o.x,+o.y);
//}

example operator -(example &o){

    o.x=(-o.x);
    o.y=(-o.y);
return o;
}
example operator+(int &m,example &o){       ///binary
    return example((m + o.x),(m+o.y));
}

int operator>(example &o,example &p){    ///relational
    return (o.x > p.x) && (o.y > p.y);
}

example example :: operator=(example p){
    x=p.x;
    y=p.y;
    return *this;
}

example operator++(example &o){
    example temp;
    temp.x=o.x++;
    temp.y=o.y++;
    return temp;
}

 example operator++(example &o,int no_use){
    example temp;
    temp.x=++o.x;
    temp.y=++o.y;
    return temp;
}

void example :: show(){
    cout<<"x "<<x<<"y "<<y<<endl;}

int main(){
    int a=5;
    example b(3,7),c(8,9),d(10,100),e;
    e = operator+(a,b);
    e.show();
    if(c>b) cout<<"c is greter than b"<<endl;
    else cout<<"b is smaller then c "<<endl;
    e=b;
    e.show();
    b++;
    ++d;
    b.show();
    d.show();
    example a1(3,6);
    a1.show();
    a1=(-a1);
    a1.show();
    return 0;
    }

#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream out("takla.txt");
    if(!out)cout<<"takla can't be open\n";
    else {
        cout<<"calling tellp : "<<out.tellp()<<endl<<endl;
        out<<"only";
        cout<<"calling tellp : "<<out.tellp()<<endl<<endl;
        out.seekp(2);
        cout<<"calling tellp : "<<out.tellp()<<endl<<endl;
        out<<"takla-is-real"<<ends;
        cout<<"calling tellp : "<<out.tellp()<<endl<<endl;
    }
    out.close();

    ifstream in("takla.txt");
    if(!in)cout<<"can't open file"<<endl;
    else{
        char str[100];
        while(!in.eof()){
                                            ///while(in) can also be used
            in.getline(str,100);
            for(int i=0;i<100;i++)
                cout.put(str[i]);
        }
        cout<<"calling tellp : "<<out.tellp()<<endl<<endl;

        in.seekg(5);
        cout<<"showing with in>>str : "<<endl;
        in>>str;
        cout<<str<<endl<<endl;
    }
    in.close();
return 0;
}

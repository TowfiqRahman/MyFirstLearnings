///see getlineeof.cpp


#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream out("takla.txt");
    ifstream in;
    char a[100],b[200],c[50];string s;
    char ch;
    int i=0;

    ///out.open("takla.txt");
    in.open("takla.txt");

    if (out){
        cout<<"Takla file opened\n\n input anything \n\n";
        gets(a);                  ///point to be noted worked for fstream
                    ///out<<a<<"\n";
                    /**do{
                        cin>>ch;
                        out.put(ch);
                    }while(ch!='.');**/
        out.write((char *)&a,sizeof(a));
        ///cout<<"using putline"<<endl;

    }
    else
        cout<<"nope\n\n";
    out.flush();
    cout<<out.tellp()<<endl;
    if(in){
        cout<<"yep takla in takla\n\n";

                    ///in>>s;
                    ///cout<<s<<endl<<endl;
                    /**while(in){
                        char ch;
                        in.get(ch);

                        if(in)cout<<ch;
                    }**/
        in.read((char *)&b,sizeof(a));
        cout<<endl<<"b using read"<<endl<<b<<"\n\n**using getline**"<<endl;
        ///in.getline(c,50,'.');
        //in.seekg(10);
        cout<<in.tellg()<<endl;
        while(in){
                in.getline(c,100,'.');
                cout<<c<<endl;
        }
    }
    else cout<<"takla does n't not exist in takla \n\n";

    in.close();
    out.close();

    /** in.open("takla.txt");
    if(in){
        cout<<"yep takla after closing takla using in.open twice\n\n";
        in>>s;
        cout<<"string s taken from file is -> "<<s<<endl;
    }
    else cout<<"nope takla using in twice \n";
    in.close();
    getchar();*/

return 0;
}

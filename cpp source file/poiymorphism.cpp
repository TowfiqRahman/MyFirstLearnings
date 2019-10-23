#include <iostream>

using namespace std;

class student{
public:
	int roll;
	static int count;
	static int getcount();
	void getnumber(){
		cout<<"Enter roll:"<<endl;
		cin>>roll;
	}
	void putnumber(){
		cout<<"Roll:"<<roll<<endl;
	}

};
int student::count=0;
int student::getcount(){
		return count;
	}

class test:virtual public student{
public:
	int quiz,viva;
	void getmarks(){
		cout<<"Enter marks:"<<endl;
		cout<<"Quiz:";
		cin>>quiz;
		cout<<"Viva:";
		cin>>viva;
	}
	void putmarks(){
		cout<<"quiz"<<quiz<<"\n"<<"Viva"<<viva<<endl;
	}
		
};

class performance:virtual public student{
public:
	int pscore;
	void getscore(){
		cout<<"performance:";
		cin>>pscore;
	}
	void putscore(){
		cout<<"Performance"<<pscore<<endl;
	}

};

class result:public test,public performance{
public:
	friend int total(result r);
	void display(){
		putnumber();
		putmarks();
		putscore();
	}
};
int total(result r){
	int total;
	total = r.quiz + r.viva + r.pscore;
	return total;
}

int main(){
	result a[10];
	int i,n;
	cout<<"Number of students before object created:"<<a[0].getcount()<<endl;
	
	cout<<"Enter number of entry:";
	cin>>n;

	for(i=0;i<n;i++){
		a[i].getnumber();
		a[i].getmarks();
		a[i].getscore();
		a[i].count++;
	}

	cout<<"Number of students after object created:"<<a[0].getcount()<<endl;
	
	for(int j=0;j<n;j++){
		a[j].display();
		cout<<"Total:"<<total(a[j])<<endl;
	}	
	return 0;
}



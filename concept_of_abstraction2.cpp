//Program to implement the concept of single inheritance in cpp
#include<iostream>
using namespace std;
class parent{ 	//Creating parent class
	public:
		void get_parent(){
		cout<<"This is base class"<<endl;
	}
};
class father:public parent{ 	//Creating child class 1
	public:
		void get_father(){
		cout<<"This is father's class"<<endl;
}
};
class son:public parent,public father{ //Creating child class 2
	public:
		void get_son(){
		cout<<"This is son's class"<<endl;
}
};
int main(){
	father obj1; //Creating object for class father
	son obj2; 	//Creating object for class son
	obj1.get_father();
	obj2.get_son();
	return 0;
}

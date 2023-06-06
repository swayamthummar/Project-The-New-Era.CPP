#include<iostream>
using namespace std;

class Student
{
	public:
	int roll;
	char name[100];
};
int main()
{
	Student s1,s2;
	cout<<"Enter your roll number->";
	cin>>s1.roll;
	cout<<"Enter your name->";
	cin>>s1.name;
	cout<<"Enter your roll number->";
	cin>>s2.roll;
	cout<<"Enter your name->";
	cin>>s2.name;
	
	cout<<"---------------------------------------"<<endl;
	
	cout<<"Roll number ->"<<s1.name<<endl;
	cout<<"Name ->"<<s1.name<<endl;
	cout<<"Roll number ->"<<s2.name<<endl;
	cout<<"Name ->"<<s2.name<<endl;
	return 0;
}

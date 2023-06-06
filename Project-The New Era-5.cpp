#include<iostream>
using namespace std;

class Students
{
	private:
	int roll_nu=1;
	char student_name[10]="Swayam";
};
int main()
{
	Students s1;
	
	cout<<"Enter Student's Roll Number->"<<s1.roll_nu<<endl<<"Enter Student's Name->"<<s1.student_name
	<<endl;
	return 0;
}

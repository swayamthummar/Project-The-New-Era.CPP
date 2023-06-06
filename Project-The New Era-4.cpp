#include<iostream>
#include<string.h>
using namespace std;

class house
{
	public:
	int house_n;
	char loc[100];
	int nu_r;
	char size_r[20];
	int nu_f;
};
main()
{
	house h1,h2;
	
	cout<<"Enter House Number->";
	cin>>h1.house_n;
	cout<<"Enter Number Of Room->";
	cin>>h1.nu_r;
	cout<<"Enter Size Of Room->";
	cin>>h1.size_r;
	cout<<"Enter Number Of Floor->";
	cin>>h1.nu_f;
	cout<<"Enter Te Address of House->";
	cin>>h1.loc;
	
	cout<<endl;
	
	cout<<"Enter House Number->";
	cin>>h2.house_n;
	cout<<"Enter Number Of Room->";
	cin>>h2.nu_r;
	cout<<"Enter Size Of Room->";
	cin>>h2.size_r;
	cout<<"Enter Number Of Floor->";
	cin>>h2.nu_f;
	cout<<"Enter Te Address of House->";
	cin>>h2.loc;
	
	cout<<endl;
		
	cout<<"--------------------------------------------"<<endl;
	
	cout<<"Houes Number ->"<<h1.house_n<<endl;
	cout<<"Number Of Rooms ->"<<h1.nu_r<<endl;
	cout<<"Size Of Rooms ->"<<h1.size_r<<endl;
	cout<<"Number Of Floors ->"<<h1.nu_f<<endl;
	cout<<"The Address Of House ->"<<h1.loc<<endl;
	
	cout<<endl;
	
	cout<<"Houes Number ->"<<h2.house_n<<endl;
	cout<<"Number Of Rooms ->"<<h2.nu_r<<endl;
	cout<<"Size Of Rooms ->"<<h2.size_r<<endl;
	cout<<"Number Of Floors ->"<<h2.nu_f<<endl;
	cout<<"The Address Of House ->"<<h2.loc<<endl;
	
	cout<<endl;
}

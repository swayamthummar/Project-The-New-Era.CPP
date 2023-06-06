#include <iostream>
using namespace std;
class Time 
{
	public:
    int hrs;
    int min;
    int sec;
};
int main() 
{
    Time t1;

    cout << "Enter time in seconds: ";
    cin >>t1.sec;
    
    cout<<"--------------------------------"<<endl;
    
    t1.hrs = t1.sec/3600;
    t1.min = (t1.sec%3600)/60;
    t1.sec = (t1.sec%3600)%60;
    
    cout<<"The Time = "<<t1.hrs<<":"<<t1.min<<":"<<t1.sec;
	return 0;
}

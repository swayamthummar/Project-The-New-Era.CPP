#include<iostream>
using namespace std;

class Distance
{
	public:
	int feet;
	int inch;
};
int main()
{
	Distance d1,d2,dist;
	cout<<"Enter the distance 1 in feet->";
	cin>>d1.feet;
	cout<<"Enter the distance 1 in inch->";
      cin>>d1.inch;
	
	cout<<"Enter the distance 2 in feet->";
	cin>>d2.feet;
	cout<<"Enter the distance 2 in inch->";
	cin>>d2.inch;
	
	dist.feet=d1.feet+d2.feet;
	dist.inch=d1.inch+d2.inch;
	
	while((dist.inch)>=12)
	{
		dist.inch=dist.inch-12;
		dist.feet++;
	}
	cout<<"Total Distance = "<<dist.feet<<" Feet "<<dist.inch<<" Inch";
	
}

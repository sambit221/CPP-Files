#include <iostream>

using namespace std;

int main() {
	int n,num,a,b;
	cin>>n;
	cin>>num;
	a=num%12;
	if(a<=6 && a>0)
	{
		if(a==1)
		{
			cout<<"your seat is Window Seat and seat number facing you is"<<num+11<<endl;
		}
		if(a==2)
		{
			cout<<"your seat is Middle Seat and seat number facing you is "<<num+9<<endl;
		}
		if(a==3)
		{
			cout<<"your seat is Aisle Seat and seat number facing you is "<<num<<endl;
		}
		if(a==4)
		{
			cout<<"your seat is Aisle Seat and seat number facing you is  "<<num+5<<endl;
		}
		if(a==5)
		{
			cout<<num+3<<"your seat is Middle Seat and seat number facing you is "<<endl;
		}
		if(a==6)
		{
			cout<<num+1<<"your seat is Window Seat and seat number facing you is"<<endl;
		}
		}
	if(a>6 || a==0)
	{
		if(a==7)
		{
			cout<<num-1<<"your seat is Window Seat and seat number facing you is"<<endl;
		}
		if(a==8)
		{
			cout<<num-3<<"your seat is Middle Seat and seat number facing you is "<<endl;
		}
		if(a==9)
		{
			cout<<num-5<<"your seat is Aisle Seat and seat number facing you is"<<endl;
		}
		if(a==10)
		{
			cout<<num-7<<"your seat is Aisle Seat and seat number facing you is"<<endl;
		}
		if(a==11)
		{
			cout<<num-9<<"your seat is Middle Seat and seat number facing you is "<<endl;
		}
		if(a==0)
		{
			cout<<num-11<<"your seat is Window Seat and seat number facing you is"<<endl;
		}
	}
	return 0;
}


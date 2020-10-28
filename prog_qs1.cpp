// if the number is divisible by 4 print (number+1) else print (number-1)

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	if(a%4==0){
	    a++;
	}
	else
	{
	    a--;
	}
	cout<<a;
	return 0;
}

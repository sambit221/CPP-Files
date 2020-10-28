#include<iostream>
using namespace std;

int fib(int n){
	if ( n==2 || n==1)
		return 1;
	else 
		return fib(n-1)+fib(n-2);
}

int main(){
	int n,sum=0;
	cout<<"enter the term you want to find and there sum :"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		sum=sum+fib(i);
	}
	cout<<"Term is : \n"<< fib(n);
	cout<<"sum upto this term is  \n"<< sum;
	return 0;
}

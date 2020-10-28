#include<iostream>
using namespace std;

int fib(int n){
	int f[n];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<n;i++){
		return f[n-1]+f[n-2];	
	}
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

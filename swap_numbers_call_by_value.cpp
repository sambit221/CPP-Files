//swap 2 numbers using functions..
// it won't swap because its the call by reference
#include<iostream>
using namespace std;

//  call by value----------------
int swap(int aa, int ab){
    int temp =aa;
    aa=ab;
    ab=temp;
    return aa,ab;
}

int main(){
    int a=4,b=5;
    cout<<"value of a is \n"<<a<< "\nand value of b is \n"<<b<<"\n"<<endl;
    swap(a, b);    // but it won't swap
    cout<<"value of a is\n"<<a<< "\nand value of b is \n"<<b<<endl;
    return 0;
}

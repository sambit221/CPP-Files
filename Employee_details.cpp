//employee details using structure and union

#include<iostream>
using namespace std;

typedef struct employee{
    /* data */
    int id;
    char favChar;
    float salary;
}ep;

union money
{
    int rice;
    char car;
    float pounds;
};


int main(){
    ep sambit;
    ep subham;
    ep rohan;

    union money m1;
    m1.rice=156;
    m1.car='c';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;

    sambit.id= 1;
    sambit.favChar='s';
    sambit.salary= 2500000;

    subham.id= 5;
    subham.favChar='d';
    subham.salary= 7200000;

    rohan.id= 9;
    rohan.favChar='a';
    rohan.salary= 1700000;

    cout<<"sambit value is :"<<sambit.id<<endl;
    cout<<"sambit value is :"<<sambit.favChar<<endl;
    cout<<"sambitvalue is :"<<sambit.salary<<"\n"<<endl;
    

    cout<<"subham value is :"<<subham.id<<endl;
    cout<<"subham value is :"<<subham.favChar<<endl;
    cout<<"subham value is :"<<subham.salary<<"\n"<<endl;

    cout<<"rohan value is :"<<rohan.id<<endl;
    cout<<"rohan value is :"<<rohan.favChar<<endl;
    cout<<"rohan value is :"<<rohan.salary<<"\n"<<endl;
    return 0;
}
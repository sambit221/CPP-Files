#include<iostream>
using namespace std;

int main(){
    enum meal { breakfast, lunch, dinner };
    meal m1=lunch;
    cout<<(m1==1)<<endl;
    return 0;
}
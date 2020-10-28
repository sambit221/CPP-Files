//find area of square, triangle and volume of cylinder, cube

#include<iostream>
using namespace std;

//area of triangle
float area (int b,int h){
    return (b*h)/2;
} 

//area of square
float area (int x){
    return x*x;
} 

//volume of cylinder
float volume (int r,int h){
    return 3.14 *r*r*h;
} 

//volume of cube
float volume (int x){
    return x*x*x;
} 

int main(){
    int a=5 , b=8;
    cout<<"area of triangle with base=5 and height=8 is: "<<area(5,8)<<endl;
    cout<<"area of square with side=5 is: "<<area(5)<<endl;
    cout<<"volume of cylinder with radii=5 and height=8 is : "<<volume(5,8)<<endl;
    cout<<"volume of cube with side=8 is: "<<volume(8)<<endl;
    return 0;
}
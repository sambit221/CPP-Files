//Q/ shop and its product details using array and class

#include<iostream>
using namespace std;


class shop
{
    // private by default
    int itemId[100], itemPrice[100], counter;

public:
    //can be accessed outside the class
    void initCounter(void){ counter=0; } //counter function
    void setPrice(void);
    void displayPrice(void);
};

//take input from the user for the price
void shop :: setPrice(void){
    cout<<"enter Id of your item number: "<<counter+1 <<endl;
    cin>>itemId[counter];
    cout<<"enter price of your item : " <<endl;
    cin>>itemPrice[counter];
    counter++;
} 

//it will show the price of the item
void shop ::displayPrice(void){
    for(int i=0; i<counter ;i++)
    {
        // here itemId and item Price are private data members so they can be accessed through member functions
        cout<<"price of the item with itemId: "<<itemId[i]<< " is: "<<itemPrice[i]<<endl;
    }
}

int main(){
    int n;
    //here dukan is a object 
    shop dukaan;  
    //counter function needed to be called before using counter variable 
    //otherwise it will throw show some garbage value
    dukaan.initCounter();
    cout<<"enter the number of items your shop have"<<endl;
    cin>> n;
    for (int j=0; j<n; j++){
        dukaan.setPrice();
    }
    dukaan.displayPrice();
    return 0;   
}

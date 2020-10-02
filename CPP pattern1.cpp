/*enter the number of rows you want to print:5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
#include<iostream>
*/

#include <iostream>
using namespace std;

int main()
{
    int n,a=1;
    cout<<"enter the number of rows you want to print:";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<a<<" ";
            if (a==15)
            {
                break;
            }
            a++;
            
        }
        cout<<endl;
    }
    

    return 0;
}

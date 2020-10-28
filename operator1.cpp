#include <cstdio> 
  
int main() 
{ 
    int a[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	a[3/2]=15;
	printf("%d %d  \n",a[-1],a[-2]); 
	for(int i=0;i<10;i++){
		printf("%d  ",a[i]);
	}
	
     
    return 0; 
}

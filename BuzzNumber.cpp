#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //finding buzz number which is divisible by 7 or whoselast digit is 7
    int buzz;
    
    cout<<"enter a number\n";
    cin>>buzz;
    
    if((buzz%7==0) || (buzz%10==7))
      cout<<"\nBOOM!! its a buzz number:-"<<ends<<buzz;
    else
     cout<<"\nSorry it aint a buzz number";
    


    return 0;
}
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*An Armstrong number is a number such that the sum of its digits raised to the third 
power is equal to the number itself.*/
int main()
{
    int num,num1;
    int product=1,rem;
    int sum=0;
    cout<<"enter a number\n";
    cin>>num;
    num1=num;
    for(int i=1;num1!=0;i++)
    {
        rem=num1%10;
        num1=num1/10;
        product=(rem*rem*rem);
        sum=sum+product;
    }
    if(num==sum)
    cout<<num<<" is an Armstrong Number\n";
    else
    cout<<num<<" is not an Armstrong Number";
   

    return 0;
}
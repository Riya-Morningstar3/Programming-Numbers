#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*A neon number is number where the sum of digits of square of the number is equal to the number*/
int main()
{
    int num,num1;
    int square;
    int rem=0;
    int sum=0;
    cout<<"enter a number\n";
    cin>>num;
    square=num*num;
    num1=square;
    for(int i=1;num1!=0;i++)
    {
        rem=num1%10;
        num1=num1/10;
        sum=sum+rem;
        cout<<ends<<sum;
    }
    if(sum==num)
    cout<<"\n its a Neon NUMBER";
    else 
    cout<<"\n its not a Neon Number";
    return 0;
}
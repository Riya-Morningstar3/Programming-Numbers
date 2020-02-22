#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  /*If a number is divisible by the sum of its digits then it will be known as a 
  harshad number*/
    int num,num1;
    int rem;
    int sum=0;
    cout<<"enter a number\n";
    cin>>num;
    num1=num;
    for(int i=1;num1!=0;i++)
      {
          rem=num1%10;
          num1=num1/10;
          sum=sum+rem;
      }
      if(num%sum==0)
      cout<<"\n Its a harshad number because it divide "<<num<<" to "<<sum<<ends<<"at "<<num/sum;
      else
      cout<<"\nits not a harshad number";
      
    return 0;
}
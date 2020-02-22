#include <iostream>
#include <conio.h>
using namespace std;
/*A Krishnamurthy number is a number whose sum of the factorial of digits is equal to the number 
itself*/
int main()
{
    int num;
    int fact=1;
    int sum=0;
    int rem=0;
    int num1;
    cout<<"enter a number";
    cin>>num;
    num1=num;
   
   for(int i=1;num1!=0;i++)
   {
       rem=num1%10;
       num1=num1/10;
       fact=1;
       for(int j=1;j<=rem;j++)
       {
           fact=fact*j;
           
       }
       cout<<"fact="<<fact<<endl;
       sum=sum+fact;

   }
    cout<<"\n sum="<<sum;
    if(sum==num)
    cout<<"\nBOOM!! the number is Krishnamurthy Number";
    else
     cout<<"SORRY!! this aint one";
    
    

    return 0;
}
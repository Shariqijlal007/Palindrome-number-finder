#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,rem,temp;
    cout<<"Enter any Number: "<<endl;
    cin>>num;
    temp=num;
    while(temp>0)
    {
    rem=temp%10;
    rev=(rev*10)+rem;
    temp=temp/10;
    }
    if(rev==num)
    cout<<"It is a Palindrome Number"<<endl;
    else
    cout<<"It is not a Palindrome Number"<<endl;
    return 0;
}

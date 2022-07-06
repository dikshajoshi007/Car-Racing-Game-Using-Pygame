#include<iostream>
using namespace std;

int main()
{
    int sum=0,c;
    cout<<"Enter number:"<<endl;
    cin>>c;
    for(int i=1;i<=c;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum="<<sum<<endl;
    return 0;

}
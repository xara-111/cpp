#include<iostream>
using namespace std;
int main()
{
    float array[100];
    float sum,avg;
    int n;

    cout<<"Enter no. of elements: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<i<<".Enter no.: ";
        cin>>array[i];
        sum=sum+array[i];
    }
    avg=sum/n;
    cout<<"Average= "<<avg<<endl;
    return 0;
}
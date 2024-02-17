/*
//HELLO WORLD

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 2 no.s ";
    cin>>a>>b;
    c=a+b;
    cout<<"Addition is\n"<<c;
    return 0;
}
*/

/*
//TAKING STRING USER INPUT

#include<iostream>
 using namespace std;
 int main()
 {
    string name;

    cout<<"May i know your name: ";
    //cin>>name;            // for a single word input
    getline(cin, name);    //for multiple word input
    cout<<"Welcome, "<<name;
    return 0;
 }
 */

/*
//AREA OF TRIANGLE

#include<iostream>
using namespace std;
int main()
{
    float base;
    float height;
    float area;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter height: ";
    cin>>height;

    area=(base*height)/2;
    cout<<"Area is "<<area;
    return 0;
    
}
*/

/*
//AREA OF TRIANGLE (BETTER)

#include<iostream>
using namespace std;
int main()
{
    float b,h,area;
    cout<<"Enter base and height: ";
    cin>>b>>h;
    area=(b*h)/2;
    cout<<"Area is "<<area;
    return 0;
}
*/

/*
//AREA OF TRIANLE (TYPE CASTING)

#include<iostream>
using namespace std;
int main()
{
    int b=7;
    int h=5;
    float area;
    area=(float)(b*h)/2;
    cout<<area;
    return 0;
}
*/

/*
//AREA OF TRIANGLE (TYPE CASTING, USER INPUT)

#include<iostream>
using namespace std;
int main()
{
    int b,h;
    float area;
    cout<<"Enter base and height: ";
    cin>>b>>h;
    area=(float)(b*h)/2;
    cout<<area;
    return 0;
}
*/

/*
//SUM OF N NATURAL NO.S (USING LOOP)

#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int count=0;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    while(count<=n)
    {
        sum=sum+count;
        count++;
    }
    cout<<"sum is "<<sum;
    return 0;
}
*/

/*
//SUM OF N NATURAL NO.S (FORMULA)
#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum;
    cout<<"Enter n: ";
    cin>>n;
    sum=(n*(n+1))/2;
    cout<<"Sum is "<<sum;
    return 0;
}
*/


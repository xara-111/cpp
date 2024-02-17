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
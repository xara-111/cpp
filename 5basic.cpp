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

/*
//FINDING ROOTS OF A QUADRATIC EQUATION (ONLY REAL AND DISTINCT)

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int a,b,c;
float root1,root2;
 cout<<"Enter 3 values";
 cin>>a>>b>>c;
 root1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
 root2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
 cout<<root1<<" "<<root2<<endl;
return 0;
}
*/

/*
//ROOTS OF QUADRATIC EQUATION

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,r1,r2;

    cout<<"Enter the coefficients of quadratic equation(a,b,c): ";
    cin>>a>>b>>c;

    d=((b*b)-(4*a*c));

    if(d>0)
    {
        r1=(-b+(sqrt(d)))/(2*a);
        r2=(-b-(sqrt(d)))/(2*a);
        cout<<"Real and distinct roots are "<<r1<<" "<<r2;
    }
    else if(d==0.0)
    {
        r1=(-b)/(2*a);
        cout<<"Roots are equal "<<r1;
    }
    else
    {
        r1=(-b)/(2*a);
        r2=(sqrt(d))/(2*a);       //giving NaN (problem)
        cout<<"Roots are imaginary "<<r1<<" "<<r2;
    }
    return 0;
}
*/


/*
//AREA OF A CIRCLE

#include<iostream>
using namespace std;
int main()
{
    float area,radius;
    cout<<"Enter radius: ";
    cin>>radius;

    //area=22/7*radius*radius;         //radius=7 and area=147(not exact value)
    //area=22/7.0*radius*radius;       //radius=7 and area=154
    //area=3.14f*radius*radius;        //radius=7 gives area=153.86
    //area=(float)22/7*radius*radius;  //radius=7 gives area=154
    
    cout<<"Area: "<<area;
    cout<<"\n";
    return 0;
}
*/

//Distance between 2 points: sqrt(x2-x1)^2+(y2-y1)^2 

/*
//INCREEMENT AND DECREEMENT

#include<iostream>
using namespace std;
int main()
{
    int i=5;

    //int j=i++;
    //int k=++i;

    //cout<<i<<" "<<j ;
    //cout<<i<<" "<<k ;

    //int j=(2*i++)+(2*i++);  // i=7 and j=22

    return 0;
}
*/


/*
//OVERFLOW

#include<iostream>
using namespace std;
int main()
{
    //char x=127;
    int x=INT_MAX;
    ++x;
    cout<<(int)x;
}
*/

/*
//BITWISE OPERATORS(AND, OR, XOR)

#include<iostream>
using namespace std;
int main()
{
    int x=11,y=7,z;
    //z=x&y;  // and operator
    //z=x|y;  //or operator
    //z=x^y;  //xor operator
    
    cout<<z;
    return 0;
}
*/

/*
//BITWISE (<< , >>)

#include<iostream>
using namespace std;
int main()
{
    char x=10,y,z;
    y=x<<1;       //left shift: variable gets multiplied by 2^1(n)
    z=x>>1;       //right shift: variable gets divided by 2^1(n) 

    cout<<(int)y<<endl;
    cout<<(int)z<<endl;
    return 0;
}
*/

/*
//BITWISE (NOT)

#include<iostream>
using namespace std;
int main()
{
    int x=5,y;
    y=~x;
    cout<<(int)y<<endl;
    return 0;
}
*/

/*
//ENUM DATATYPE

#include<iostream>
using namespace std;
enum day{mon,tue,wed=6,thurs,fri,sat=10,sun};

int main()
{
    day d;
    d=tue;
    cout<<mon<<endl;
    cout<<wed<<endl;
    cout<<thurs<<endl;
    cout<<fri<<endl;
    cout<<sun<<endl;
    return 0;
}
*/


/*
//TYPEDEF 

#include<iostream>
using namespace std;

typedef int marks;

int main()
{
    marks m1,m2;  //now we can easily figure out m1,m2 are marks

    m1=34;
    m2=67;   
}
*/

/*
//NET SALARY

#include<iostream>
using namespace std;
int main()
{
    float basicsalary, percentallow, percentdeduct, netsalary;
    cout<<"Enter basic salary: ";
    cin>>basicsalary;
    cout<<"Enter percentage of allowance: ";
    cin>>percentallow;
    cout<<"Enter percentage of deduction: ";
    cin>>percentdeduct;

    netsalary=basicsalary+(basicsalary*percentallow)-(basicsalary*percentdeduct);
    cout<<"Salary: "<<netsalary;
    return 0;
}
*/
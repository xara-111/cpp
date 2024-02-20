/*
//MAXIMUM OF 2 NUMBERS

#include<iostream>
using namespace std;
int main()
{
    int a,b, max;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    if(a>b)
    {
        max=a;
    }
    else{
        max=b;
    }
    cout<<"maximum= "<<max;
    return 0;
}
*/

//CHECK IF NUMBER +VE OR -VE
//CHECK IF EVEN OR ODD


/*
// CONDITIONALS

#include<iostream>
using namespace std;
int main()
{
    if(1)                   // 1=true and if(0)=false, code will never be excecuted
    {
        cout<<"hello"<<endl;
    }
    else
    {
        cout<<"bye";      //this will never be excecuted since previous condition is always true
    }
    return 0;
}
*/

/*
//LOGICAL OPERATORS AND COMPOUND CONDITIONAL STATEMENTS

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter age: ";
    cin>>age;
    if(age>12 && age <=50)  // && operator: looking for value withing a range
    {
        cout<<"Working";
    }
    else
    {
        cout<<"leisure:";
    }
    return 0;
}
*/

/*
// COMPOUND CONDITIONAL STATEMENT

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age<12 || age>50)     // || operator: looking for value which are on different sides of a range
    {
        cout<<"Offer available";
    }
    else{
        cout<<"No offer";
    }
}
*/

/*
//NESTED CONDITIONAL STATEMENTS

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<a;
    }
    else if(b>c)   //this is actually a nested condition of if inside else condition
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }
    return 0;
}
*/

/*
// CALCULATING THE DISCOUNT AMOUNT OF TOTAL

#include<iostream>
using namespace std;
int main()
{
    float amount;
    float disAmount=0.0;
    cout<<"Enter amount: ";
    cin>>amount;
    if(amount>=5000)
    {
        disAmount=amount-(20/100.0*amount);       // Need to write the values in decimal as it has been assigned as float before
        cout<<"The bill amount is "<<disAmount;
    }
    else if(amount>=2000 && amount<5000)
    {
        disAmount=amount-(10/100.0*amount);
        cout<<"The bill amount is "<<disAmount;
    }
    else{
        disAmount=amount-(5/100.0*amount);
        cout<<"The bill amount is "<<disAmount;
    }
    
}
*/


// ELSE-IF LADDER

/*
//SHORT CIRCUIT
#include<iostream>
using namespace std;
int main()
{
    int a=5,b=7,i=5;
    if(a>b && ++i<b)   //The second condition of ++i wont be implemented since a>b is already false and in && if one is false, both are false.
    {

    }
    cout<<i; //so i will remain 5  

    //if a>b was true, then 2nd condition (++i) would apply and i would become 6.
}
*/

/*
//SHORT CIRCUIT 2

#include<iostream>
using namespace std;
int main()
{
    int a=15,b=7,i=5;
    if(a>b || ++i<b)  //since a>b is true, and in || one true means whole true, so 2nd statement isn't checked
    {

    }
    cout<<i;  //i would be 5
}
*/

/*
//DYNAMIC DECLARATION 

#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5;
    if(int c=a+b; c>10)
    {
        //Thus variables can be declared inside conditions also
    }
    return 0;
}
*/

/*
//SWITCH CASE

#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter day number: ";
    cin>>day;

    switch(day)
    {
        case 1:
        cout<<"Monday"<<endl;              // endl= NEXT LINE
        break;

        case 2:
        cout<<"Tuesday"<<endl;
        break;

        case 3:
        cout<<"Wednesday"<<endl;
        break;

        case 4: cout<<"Thursday"<<endl;     //COULD ALSO BE WRITTEN LIKE THIS
        break;

        default:
        cout<<"Invalid"<<endl;
    }
    return 0;
}
*/


/*
//CALCULATOR (SWITCH CASE)

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char sign;

    cout<<"Enter a and b: ";
    cin>>a>>b;

    cout<<"Enter sign: ";
    cin>>sign;

    switch(sign)
    {
        case '+': cout<<(a+b);
        break;

        case '-': cout<<(a-b);
        break;

        case '/': cout<<(a/b);
        break;

        case '*': cout<<(a*b);
        break;

        case '%': cout<<(a%b);
        break;

        default:cout<<"Invalid";
        break;

    }
    return 0;

}
*/


/*
//CALCULATING THE DISCOUNT 2

#include<iostream>
using namespace std;
int main()
{
    float billAmount;
    float discount=0.0;

    cout<<"Enter total amount: ";
    cin>>billAmount;

    if(billAmount>=500)
    {
        discount=billAmount*20/100;
    }
    else if(billAmount>=100 && billAmount<500)
    {
        discount=billAmount*10/100;
    }
    else
    {
        discount=billAmount;
        cout<<"No discount";
    }

    cout<<"The discount is "<<discount<<endl;
    cout<<"Total amount is "<<(billAmount-discount)<<endl;
    return 0;
}
*/

/*
//leap year
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year: ";
    cin>>year;

    if(year%4==0)
    {
        cout<<"leap";
    }
    else if(year%100==0)
    {
        cout<<"Not leap";
    }
    else if(year%400==0)
    {
        cout<<"leap";
    }
    
}
*/



/*
//LEAP YEAR (BETTER)

#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year: ";
    cin>>year;

    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)        
            {
                cout<<year<<" is a leap year\n";
            }
            else
            {
                cout<<year<<" is not a leap year\n";
            }
        }
        else
        {
            cout<<year<<" is a leap year\n";
        }
    }
    else
    {
        cout<<year<<" is not a leap year\n";
    }
    return 0;
}
*/
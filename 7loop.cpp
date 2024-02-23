/*
// PRINT N NUMBERS (WHILE LOOP)

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int count=1;
    while(count<=n)
    {
        cout<<count;
        count++;
    }
    return 0;
}
*/






/*
// PRINT N NUMBERS (DO-WHILE LOOP)

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int count=1;

    do{
        cout<<count;
        count++;
    }while(count<=n);
}
*/







/*
// PRINT N NUMBERS (WHILE LOOP)

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<i;
    }
}
*/







/*
// INFINITE LOOP

#include <iostream>
using namespace std;
int main()
{
int i=0;
for(;;)
 {
 cout<<" Hello";
 }
}
*/







/*
// BREAK INFINITE LOOP
#include<iostream>
using namespace std;
int main()
{
    int i=0;
    for(;;)
    {
        cout<<"Hi\n";
        i++;
        if(i==10)
        {
            break;
        }
    }
}
*/







/*
// MULTIPLICATION TABLE

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"To print the table of: ";
    cin>>n;

    for(int i=1;i<=10;i++)
    {
        int mul=n*i;
        cout<<n<<"x"<<i<<"="<<mul<<endl;
    }
}
*/








/*
//SUM OF N NUMBERS

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
}
*/






/*
//FACTORIAL

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no.: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial is "<<fact<<endl;
}
*/






/*
// FACTORS OF A NUMBER

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The factors are- "<<endl;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
*/







/*
// PERFECT NUMBER

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int factors=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            factors+=i;
        }
    }
    if(factors==n)
    {
        cout<<"Perfect";
    }else{
        cout<<"not";
    }
}
*/








/*
//PRIME NUMBER

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"prime";
    }else{
        cout<<"composite";
    }
}
*/









/*
//DISPLAY DIGITS OF A NUMBER IN REVERSE

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int firstDigit;
    while(n!=0)
    {
        firstDigit=n%10;

        cout<<firstDigit;

        n=n/10;    
    }
    cout<<endl;
}
*/










/*
//DISPLAY DIGITS OF A NUMBER IN REVERSE

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int first_digit;
    while(n!=0)
    {
        first_digit=n%10;
        cout<<first_digit;
        n/=10;
    }
    if(first_digit==n)
    {
        cout<<"Palindrome";
    }else{
        cout<<"Not";
    }
}
*/







/*
//REVERSE A NUMBER

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int rev=0;
    int r;

    while(n!=0)
    {
        r=n%10;
        n/=10;
        rev=rev*10+r;
    }
    cout<<"Reverse is "<<rev;
}
*/








/*
//PALINDROME NUMBER

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int rev=0;
    int r;
    int temp=n;   //TAKING A TEMP VARIABLE BECAUSE DURING LOOP N IS DIVIDED REPEATEDLY AND BECOMES 0.
    while(n!=0)
    {
        r=n%10;
        n/=10;
        rev=rev*10+r;
    }
    cout<<rev<<endl;
    if(rev==temp)
    {
        cout<<"palindrome";
    }else{
        cout<<"Not palindrome";
    }
}
*/








/*
//ARMSTRONG NUMBER

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int temp=n;
    int r;
    int sum=0;
    while(n!=0)
    {
        r=n%10;
        n/=10;
        sum=sum+(r*r*r);
    }
    if(sum==temp)
    {
        cout<<"Armstrong";
    }else{
        cout<<"Not armstrong";
    }

}
*/








/*
// GCD OF TWO NUMBERS
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter two numbers: ";
    cin>>n>>m;

    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }else if(n>m)
        {
            n=n-m;
        }
    }
    cout<<"GCD= "<<m;

}
*/







//PROBLEM QUESTIONS

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int temp=n;
    int r;
    int rev=0;

    while(n!=0)
    {
        r=n%10;
        n/=10;
        rev=rev*10+r;
    }
    switch(rev)
    {
        case 0:cout<<"zero";
        break;
        case 1:cout<<"one";
        break;
        case 2:cout<<"two";
        break;
        case 3:cout<<"three";
        break;
        case 4:cout<<"four";
        break;
        case 5:cout<<"five";
        break;
        case 6:cout<<"six";
        break;
        case 7:cout<<"seven";
        break;
        case 8:cout<<"eight";
        break;
        case 9:cout<<"nine";
        break;
    }
}
*/










/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    char reverse[10];
    int r;
    int i=0;
    while(n>0)
    {
        r=n%10;
        reverse[i]=r+'0';
        n/=10;
    }
    reverse[i]='\0';
    cout<<"Reverse: "<<reverse;
}
*/
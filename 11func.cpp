/*
//FUNCTION FOR FINDING MAXIMUM OF 3 NUMBERS
#include<iostream>
using namespace std;

int Max(int a, int b, int c)
{
    int max;
    if(a>b && a>c)
    {
        max=a;
    }
    else if(b>c)
    {
        max=b;
    }
    else{
        max=c;
    }
    return max;
}
int main()
{
    int x,y,z;
    cout<<"Enter x,y,z: ";
    cin>>x>>y>>z;

    cout<<"Max is "<<Max(x,y,z)<<endl;
}
*/





/*
// FUNCTION OVERLOADING

#include<iostream>
using namespace std;

//All functions having same name but different no. of argument or different datatype of argument
//Return type doesn't matter in function overloading

int add(int x,int y)
{
    return x+y;
}

int add(int x, int y, int z)
{
    return x+y+z;
}

float add(float x, float y)
{
    return x+y;
}

int main()
{
    int a=10,b=5,c,d;
    c=add(a,b);
    d=add(a,b,c);

    float i=2.5f, j=3.5f, k;
    k=add(i,j);

    cout<<c<<" "<<d<<" "<<k;
}
*/






/*
//FUNCTION TEMPLATE

#include<iostream>
using namespace std;

template <class T>

T max(T x, T y)
{
    if(x>y)
    {
        return x;
    }
    else{
        return y;
    }
}

int main()
{
    int c=max(10,5);
    float d=max(10.5f, 6.9f);

    cout<<max(5.6f,7.8);  // Would give error because of confusion in datatype of arguments
}
*/





/*
//DEFAULT ARGUMENT

#include<iostream>
using namespace std;
int main()
{
    int add(int x, int y, int z=0)   //Assign some default value to a argument
    {
        return x+y+z;
    }
}
*/




/*

//DEFAULT ARGUMENT 2

# include<iostream>
using namespace std;
    
int max(int a=0,int b=0, int c=0)
{
	return a>b && a>c ? a:b>c? b:c;     //Ternary operator
}
int main()
{
	cout<<max()<<endl;
	cout<<max(10)<<endl;
	cout<<max(10,13)<<endl;
	cout<<max(10,13,15)<<endl;
	return 0;
}
*/






/*
// CALL BY ADDRESS

#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x=10,y=20;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
}
*/




/*
// CALL BY REFERENCE

#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}
*/



/*
// RETURN BY ADDRESS

#include<iostream>
using namespace std;

int * fun()
{
    int *p=new int[5];
    for(int i=0;i<5;i++)
    {
        p[i]=5*i;
    }
    cout<<p<<endl;
    return p;    
}
int main()
{
    int *q=fun();
    cout<<q<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<q[i]<<endl;
    }
}
*/




/*
//RETURN BY REFERENCE

#include<iostream>
using namespace std;
int & fun(int &x)
{
    return x;
}
int main()
{
    int a=10;
    fun(a)=25;
    cout<<a<<endl;
}
*/





/*
// GLOBAL AND LOCAL VARIABLE

#include<iostream>
using namespace std;

int g=5;    //Global variable
void fun()
{
    int a=10;   //Local variable
    a++;
    g++;
    cout<<a<<" "<<g<<endl;   //Display 11 and 6
}
int main()
{
    cout<<g<<endl;    //Display 5
    fun();
    cout<<g<<endl;    //Dipslay 6 
}
*/



/*
// 
#include<iostream>
using namespace std;

int g=5;
void fun()
{
    int g=10;
    g++;
    //cout<<g<<endl;     //Display 11
}
int main()
{
    cout<<g<<endl;  //Display 5
    fun();
    cout<<g<<endl;  //Display 5 (local variable change can't modify global variables)
}
*/






/*
//ANOTHER BLOCK OF CODE INSIDE FUNCTION

#include<iostream>
using namespace std;

int g=5;
void fun()
{
    int g=10;
    {
        int g=0;          //Block of code
        g++;
        cout<<g<<endl;    //Displays 1
    }
    cout<<g<<endl;        //Displays 10;
    
}
int main()
{
    cout<<g<<endl;    //Display 5
    fun();
    cout<<g<<endl;   //Display 5
}
*/


/*
//SCOPING RULE (levels of scope c++ supports)

#include<iostream>
using namespace std;
int x=10;
int main()
{
    int x=20;
    {
        int x=30;
        cout<<x<<endl;   //Display 30
    }
    cout<<x<<endl;      //Display 20

    cout<<::x<<endl;    //To access the global variable, Displays 10

    // :: =scope resolution
}
*/



/*
//STATIC VARIABLE

#include<iostream>
using namespace std;

void fun()
{
    static int s=10;    
    s++;
    cout<<s<<endl;
}
int main()
{
    fun();
    fun();
    fun();
}

//Without static variable, s wil be declared again and again.
//Everytime main calls fun(), it'll print 11 thrice because it's starting from 10.

//But with static variable, s is not declared over and over
// It remains in the memory and calling fun thrice displays 11,12,13.

//Useful in modular/function based programming
*/


/*
//RECURSIVE FUNCTION

#include<iostream>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}
int main()
{
    int x=5;
    fun(x);
}
*/



/*
//RECURSVE FUNCTION 2
#include<iostream>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}
int main()
{
    int x=5;
    fun(x);
}
*/



/*
//WRITE A PROGRAM FOR LINEAR SEARCH USING FUNCTION

#include<iostream>
using namespace std;

int search(int array[], int key, int n)
{
    for(int i=0; i<n; i++)
    {
        if(key==array[i])
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int array[100];
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter elements: ";
        cin>>array[i];
    }
    int key;
    cout<<"Enter key to search: ";
    cin>>key;
    
    int index=search(array,key,n);
    cout<<"Found at "<<index<<endl;
}
*/
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






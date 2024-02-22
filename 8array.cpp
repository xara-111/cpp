/*
//DECLARATION OF ARRAY

#include<iostream>
using namespace std;
int main()
{
    int array[10]={2,4,6,7,1,0};

    for(int i=0;i<10;i++)
    {
        cout<<array[i]<<endl;
    }   
}
*/

/*
//FOR EACH LOOP ARRAYS

#include<iostream>
using namespace std;
int main()
{
    int array[]={2,4,6,7,1,0};   //array can be declared like this 


    //float arr[]={2.5f,5.8f,5,7,3};       //array of float values
    //for(auto x:arr)                      //Now , doesn't need to know the type of array declared. auto can print it irrespectively.
    
    //char a[]={'A',66,'B',68};      //The numbers in this array are actually decimal values of the charechter. int x:a will print A,B as their decimal values.

    for(int x:array)                //declared variable x access all the element of array (range-based for loop)
        cout<<x<<endl;
        return 0;
}
*/

/*
//READ AND DISPLAY N NUMBERS USING ARRAY

#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[100];

    cout<<"Enter the number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter elements in array: ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
*/

/*
//ADDING ALL THE ELEMENTS OF ARRAY

#include<iostream>
using namespace std;
int main()
{
    int array[100];
    int n;
    int sum=0;
    cout<<"Enter no. of elements: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter elements: ";
        cin>>array[i];
    }
    cout<<"The array is -"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    cout<<"The sum is "<<sum<<endl;

}
*/


/*
//FINDING MAXIMUM ELEMENT FROM ARRAY

#include<iostream>
using namespace std;
int main()
{
    int array[100];
    int n;
    cout<<"enter no. of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter elements: ";
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    int max=array[0];
    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    cout<<"The maximum is "<<max<<endl;

}
*/


/*
//FINDING MINIMUM ELEMENT FROM ARRAY

#include<iostream>
using namespace std;
int main()
{
    int array[100];
    int n;
    cout<<"enter no. of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter elements: ";
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    int min=array[0];
    for(int i=0;i<n;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    cout<<"The minimum is "<<min<<endl;

}
*/


/*
//COUNT NUMBER OF POSITIVE AND NEGATIVE ELEMENTS IN ARRAY

#include<iostream>
using namespace std;
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

    cout<<"The array is- "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    int countP=0;
    int countN=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>=0)
        {
            countP++;
        }
        else if(array[i]<0)
        {
            countN++;
        }
    }
    cout<<"Positive: "<<countP<<endl;
    cout<<"Negative: "<<countN<<endl;

}
*/


/*
//LINEAR SEARCH
#include<iostream>
using namespace std;
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

    cout<<"The array is-"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    int key;
    cout<<"Enter key: ";
    cin>>key;

    for(int i=0; i<n;i++)
    {
        if(key==array[i])
        {
            cout<<"Location is "<<i;
            return 0;
        }
        
    }
    cout<<"Not found "<<endl;
    return 0;
}
*/


/*
// BINARY SEARCH

#include<iostream>
using namespace std;
int main()
{
    int array[6]={12,19,21,28,36,42};
    int l=0;
    int h=5;
    int mid;
    int key;
    cout<<"Enter key: ";
    cin>>key;

    while(l<=h)
    {
        mid=(l+h)/2;

        if(key==array[mid])
        {
            cout<<"Found at "<<mid<<endl;
            return 0;
        }
        else if(key>array[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    cout<<"Not found"<<endl;
}
*/


/*
//BINARY SEARCH (USER INPUT)

#include<iostream>
using namespace std;
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

    cout<<"The array is- "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    int l=0;
    int h=(n-1);

    int key;
    cout<<"Enter key: ";
    cin>>key;

    int mid;

    while(l<=h)
    {
        mid=(l+h)/2;

        if(key==array[mid])
        {
            cout<<"Found at "<<mid<<endl;
            return 0;
        }
        else if(key>array[mid])
        {
            l=mid+1;
        }
        else if(key<array[mid])
        {
            h=mid-1;
        }
    }
    cout<<"Not found"<<endl;

}
*/

/*
//NESTED LOOP

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<"("<<i<<","<<j<<")";
        }
        cout<<endl;
    }
}
*/


/*
// SQUARE 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
*/


/*
//LOWER TRIANGLE OF *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

/*
//UPPER TRIANGLE OF *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"  ";
        }
        for(int k=i; k<n; k++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
*/


/*
//CROSS LOWER TRIANGLE OF *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            cout<<"  ";
        }
        for(int k=0;k<=i ;k++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
*/

/*
// UPPER CROSS TRIANGLE OF *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
*/


/*
//CONTINUOUS NUMBER PATTERN
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int count=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
*/


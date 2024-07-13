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
//FOR EACH LOOP (DISPLAYING)ARRAYS

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
//FOR EACH LOOP FEATURES

#include<iostream>
using namespace std;
int main()
{
    int A[]={2,5,6,3,7,9,1};
    for(auto x:A)
    {
        cout<<++x<<" ";       //This will print increased value but won't increase the original value in the array.
    }
    cout<<endl;
    for(auto x:A)
    {
        cout<<x<<" ";        //So this loop will print the original array only.
    }
    return 0;
    
}
*/

// for(auto &x:A) -> Referencing x in for each will change the original values in the array.
// auto -> No need for datatype. auto to help in for-each loop.






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
        for(int j=0;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
*/





/*
//2-D ARRAY

#include<iostream>
using namespace std;
int main()
{
    int A[2][3]={{2,5,9},{6,9,15}}; //DECLARING AND INITIALIZING ARRAY
    //int A[2][3]={2,5,9,6,9,15};   //CAN ALSO BE WRITTEN THIS WAY
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";   //A[i][j] IS 1 DIGIT  BUT A[i] AND A[j] SEPARATELY IS ADDRESS OF THEIR LOCATION.
        }
        cout<<endl;
    }
}
*/








/*
//DISPLAYING 2-D ARRAY WITH FOR EACH LOOP

 #include<iostream>
 using namespace std;
 int main()
 {
     int A[2][3]={2,3,4,5,6,7};
     for(auto &x:A)
     {
         for(auto &y:x)
         {
             cout<<y<<" ";
         }
         cout<<endl;
     }
     return 0;
 }
*/








/*
//TAKING THE USER INPUT OF ARRAY IN TERMINAL 

 #include<iostream>
 using namespace std;
 int main()
 {
     int A[2][3];       //NOT DECLARING ARRAY HERE

     for(auto &x:A)           
     {
         for(auto &y:x)    
         {
             cin>>y;         // LOOP TO TAKE USER INPUT IN TERMINAL
         }
         cout<<endl;
     }
     for(auto &x:A)       //LOOP TO DISPLAY ARRAY
     {
         for(auto &y:x)
         {
             cout<<y<<" ";
         }
         cout<<endl;
     }
     return 0;
 }

*/








/*
//ADDING TWO MATRICES

#include<iostream>
using namespace std;
int main()
{
    int A[2][3]={{2,3,4},{5,8,9}};
    int B[2][3]={{8,7,9},{3,9,1}};
    int C[2][3];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
        //cout<<endl;
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/






/*
// AVERAGE OF ALL ELEMENTS IN ARRAY

#include<iostream>
using namespace std;
int main()
{
    float array[100];
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

    float sum;
    float avg;

    for(int i=0;i<n;i++)
    {
        sum=sum+array[i];
    }

    avg=sum/n;
    cout<<"Average is "<<avg<<endl;

}
*/







/*
//AVERAGE OF ELEMENTS OF ARRAY (SHORTER AND BETTER)

#include<iostream>
using namespace std;
int main()
{
    float array[100];
    float sum,avg;
    int n;

    cout<<"Enter no. of elements: ";
    cin>>n;

    for(int i=0;i<n; i++)
    {
        cout<<i<<".Enter no.: ";
        cin>>array[i];
        sum=sum+array[i];
    }
    avg=sum/n;
    cout<<"Average= "<<avg<<endl;
    return 0;
}
*/











// P_R_O_B_L_E_M (HARD)

/*
//MULTIPLICATION OF MATRICES

#include<iostream>
using namespace std;
int main()
{
    int A[50][50];
    int B[50][50];
    int C[50][50];

    int r1,c1,r2,c2;

    int n;
    cout<<"Enter the number of rows and columns in matrix 1: ";
    cin>>r1>>c1;

    cout<<"Enter the number of rows and columns in matrix 2: ";
    cin>>r2>>c2;

    if(r1!=c2)       //FOR MULTIPLICATION OF MATRICES, NO OF ROWS OF MATRIX 1==NO. OF COLUMNS OF MATRIX 2
    {
        cout<<"Multiplication not possible."<<endl;
        return 0;
    }


// ENTERING THE ELEMENTS 

    cout<<"Enter elements in Matrix1- "<<endl;

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"Enter elements at "<<i+1<<j+1<<":";
            cin>>A[i][j];
        }
    }

    cout<<"Enter elements in Matrix2- "<<endl;

    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"Enter elements at "<<i+1<<j+1<<":";
            cin>>B[i][j];
        }
    }

//DISPLAYING THE MATRICES

    cout<<"Matrix 1-"<<endl;

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix 2-"<<endl;

    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

//MULTIPLYING THE MATRICES
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            C[i][j]=0;
            for(int k=0;k<c1;k++)               //WHY K<C1 ???  
            {
                C[i][j]+=A[i][j]*B[i][j];
            }
        }
    }

    cout<<"The multiplied matrix-"<<endl;

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<" "<<C[i][j];

            if(j==c2-1)           //COULDN'T UNDERSTAND WHY WE NEED THIS 
            {
                cout<<endl;
            }

        }
        cout<<endl;
    }

}
*/

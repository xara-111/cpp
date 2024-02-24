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
            for(int k=0;k<c1;k++)
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
/*
            if(j==c2-1)           //COULDN'T UNDERSTAND WHY WE NEED THIS 
            {
                cout<<endl;
            }
*/
        }
        cout<<endl;
    }



}
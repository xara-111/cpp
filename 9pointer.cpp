/*
// POINTERS
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p;      //DECLARATION OF POINTER
    p=&x;         //INITIALIZATION OF POINTER (ADDRESS OF X STORED IN P)  

    //P IS POINTING TO X. P IS HAVING THE ADDRESS OF X BUT NOT DATA.

    cout<<x<<endl;       //DISPLAY THE VALUE OF X

    cout<<&x<<endl;      //DISPLAY THE ADDRESS OF X

    cout<<p<<endl;       //DISPLAY THE DATA AT P WHICH IS ADDRESS OF X

    cout<<&p<<endl;      //DISPLAY THE ADDRESS OF P

    cout<<*p<<endl;     //DEREFERENCING - DISPLAY DATA WHERE P IS POINTING AT. DATA OF X WILL BE DISPLAYED =10.
}

*/









/*
// ARRAY CREATED IN STACK

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter no. of elements: ";
    cin>>size;

    int A[size];
    cout<<sizeof A<<endl;    //DISPLAY THE NO. OF BYTES

    //This array is created in stack.
    //Now if I want to change the size of array, there's no syntax available for that.
    //So once an array is created within a program of some size it can't be modified.
    //Dynamic array inside heap can help to modify the size.
}
*/








/*
//ARRAY CREATED IN HEAP (CHANGING SIZE IN RUNTIME) (DYNAMIC ALLOCATION)

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter no. of elements: ";
    cin>>size;

    int *p=new int[size];    //Declaration of pointer p is inside stack, "new" means memory allocated from heap.

    //p[i] ->loop for accessing elements of array running for 'old size' times

    delete []p;  //Deleting the old array before making the pointer point at the array of new size.
    

    cout<<"Enter new size: ";
    cin>>size;
    p=new int[size];
    //p[i] ->loop for accessing elements of array running for 'new size' times



    //It means I can create a new array inside heap with a different size and assign it to P.
    //With the same pointer, we can create an array of larger or smaller size.
    //This is the benefit of having array inside heap or dynamically creating the memory.
    


    //So now what happens to the 'old size' existing array?
    //Before changing pointer P to point to the new array,we should dealocate/delete the old array.



    //So having array inside heap with the help of pointers is that pointer remains same.
    //And that pointer could be pointing to any size of memory.
    //This is the flexibility we get with the help of heap.
    //Program become more dynamic and change their sizes of memory during runtime or make pointer point at different size of memory.

    return 0;
}
*/







/*
//POINTER ARITHMETIC

#include<iostream>
using namespace std;

void PointerArith()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    p++;// move pointer to next location to print 4
    cout<<*p;
    
    p=p+3; // pointer will be pointing on 10
    
    cout<<p[-4];    //  to print 2 without moving pointer
}
*/




/*
//POINTER ARITHMETIC

#include <iostream>
using namespace std;
int main()
{
int A[5]={2,4,6,8,10};
int *p=A,*q=&A[4];           //Pointer P pointing at the array A.
                             //pointer q pointing at the element(10) at index 4 of array A.

 cout<<*p<<endl;            // DISPLAYS 2(THE FIRST ELEMENT OF ARRAY A A THAT POINTER P IS POINTING AT.)
 cout<<endl;

 p++;                      //POINTER MOVE TO NEXT LOCATION
 cout<<*p<<endl;           //DISPLAYS 4(SECOND ELEMENT OF ARRAY A)
 cout<<endl;

 p--;                      //POINTER MOVE TO PREVIOUS LOCATION
 cout<<*p<<endl;           //DISPLAYS 2(POINTER MOVES BACK TO FIRST ELEMENT OF ARRAY A)
 cout<<endl;

 cout<<p<<endl;
 cout<<p+2<<endl;          //POINTER MOVES BY 2 ELEMENTS(OR 8 BYTES IN ADDRESS IN CASE OF INTEGER[INTEGER TAKES 4 BYTES/ELEMENT])
 cout<<endl;               //DISPLAYS THE UPDATED ADDRESS OF THE POINTER 

 cout<<*p<<endl;           //POINTER MOVES BY 2 ELEMENTS
 cout<<*(p+2)<<endl;       //DISPLAYS THE ELEMENT(6) POINTER POINTING AFTER UPDATING
 cout<<endl;

 cout<<q-p<<endl;         //DISPLAYS DIFFERENCE(DISTANCE) BETWEEN 2 POINTERS (+VE= 1ST POINTER FAR AWAY)
 cout<<p-q<<endl;         //(-VE= 2ND POINTER FAR AWAY)




cout<<p<<endl;              //ADDRESS OF POINTER BEFORE P++

 for(int i=0;i<5;i++)       //LOOP TO ACCESS ELEMENTS OF ARRAY
 {
    //cout<<A[i]<<" ";      //THIS WILL PRINT THE ELEMENTS OF ARRAY
    // cout<<i[A]<<" ";     //THIS WILL ALSO PRINT THE ELEMENTS OF ARRAY
    //cout<<*(A+i)<<" ";    //THIS WILL ALSO PRINT THE ELEMENTS OF ARRAY
    //cout<<(A+i)<<" ";     //THIS WILL PRINT THE ADDRESS OF ELEMENTS OF ARRAY
    //cout<<p+i<<" ";       //THIS WILL PRINT THE ADDRESS OF ELEMENTS OF ARRAY
    //cout<<*(p+i)<<" ";    // THIS WILL PRINT THE ELEMENTS OF ARRAY
    //cout<<p[i]<<" ";      //THIS WILL PRINT THE ELEMENTS OF ARRAY
    
    cout<<*p<<" ";          //THIS WILL PRINT THE ELEMENTS OF ARRAY
    p++;
 }
 cout<<endl;
 cout<<p<<endl;             //ADDRESS OF POINTER AFTER P++
 return 0;
}
*/




/*
//
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x;   //REFERENCE Y IS A NICKNAME OF VARIABLE X. 
                //A LOCATION/ADDRESS CAN BE CALLED WITH BOTH NAMES X AND Y.
                //REFERENCE DOESN'T CONSUME ANY MEMORY.

    x++;    //->x=11
    y++;    //->y=12

    cout<<x<<endl;   // BOTH DISPLAYS 12
    cout<<y<<endl;   
}
*/



//NOTES:

// R-VALUE:  a=x (x on RHS)-> Data attribute of x(whatever is in x has to be saved in a)
// L-VALUE:  x=25 (x on LHS)-> Address attribute of x (25 overwrites the previous value at the address of x)

//In (int &y=x): Even though x is on RHS, it is L-value because address attribute of x is used.
//Address of x is being assigned a nickname at it's location through which also we can access that loaction.
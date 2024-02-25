/*
//DECLARING STRINGS

#include<iostream>
using namespace std;
int main()
{
    // char S[10]="Hello";       //STRINGS IN STACK
    // char *S="Hello";          //STRINGS IN HEAP
    string S="hello";
    cout<<S<<endl;
}
*/









/*
// USER INPUT OF STRING (SINGLE WORD)
#include<iostream>
using namespace std;
int main()
{
    char s[100];
    cout<<"Enter your name: ";
    cin>>s;
    cout<<"Welcome "<<s;
    return 0;
}
*/








/*
// STRING USER INPUT (MULTIPLE WORDS)
#include<iostream>
using namespace std;
int main()
{
    char s[100];
    cout<<"Enter your name: ";
    // cin.get(s,100);           //GET FUNCTION
    cin.getline(s,100);          //GETLINE FUNCTION
    cout<<"Welcome "<<s<<endl;
}
*/









/*
cin.ignore()
• When we enter any input from keyboard, it is transferred to an
input buffer.
• Program reads the data from input buffer
• After entering value from keyboard, we hit enter.
• Program will read the value and ignore enter key from buffer.
• If program doesn’t ignore it the it may not read next input.
• cin.ignore() is used for forcing the program to ignore it.
• Usually programs don’t read a string value because of enter key.
• Use cin.ignore() before reading a string
*/

/*
//TAKING USER INPUT MULTIPLE TIMES(GET FUNCTION)

#include<iostream>
using namespace std;
int main()
{


//This block of code will not take the string input the second time
//because the get in first block of code take the user input and the get in 2nd block takes enter as input.
//As a result both gets displayed together and @nd block becomes useless.

    char s[100];
    char s2[100];
    cout<<"Enter your name: ";
    cin.get(s,100);
    cout<<"Welcome "<<s<<endl;

    cin.ignore();      
    //This function helps the 2nd block to run as well for taking user input.
    //It ignore any extra character remaining after the first string.
    //It'll ignore/clar up '/n'.

    cout<<"Enter name again: ";
    cin.get(s2,100);
    cout<<"Welcome "<<s2<<endl;

}
*/





/*
//TAKING USER INPUT MULTIPLE TIMES(GETLINE FUNCTION)

#include <iostream>
using namespace std;
int main()
{
// Getline function would excecute both block of code and take the input.
//No need for ignore function here.

    char s[100];
    char s2[100];

    cout<<"Enter your name: ";
    cin.getline(s,100);
    cout<<"Welcome "<<s<<endl;

    cout<<"Enter name again: ";
    cin.getline(s2,100);
    cout<<"Welcome "<<s2<<endl;
}
*/




/*
//LENGTH OF A STRING

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    cout<<"Enter string: ";
    cin.getline(s,100);

    cout<<"Length is "<<strlen(s)<<endl;
}
*/







/*
//LENGTH OF STRING IN HEAP

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char *s;
    cout<<"Enter string: ";
    cin.getline(s, 100);

    int length=strlen(s);

    cout<<"Length is "<<length;
    return 0;
}
*/






/*
//CONCATENATE STRING

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[10]="Hello ";
    char s2[10]="World";

    // strcat(s,s2);          // Concatenate 2 strings 
    // strncat(s,s2,3);       //Concatenate 2 strings by mentioning the size of character to concatenate

    cout<<s<<endl;

    return 0;
}
*/



/*
//COPYING STRING

#include<iostream>
using namespace std;
int main()
{
    char s1[20]="Good";
    char s2[10]="";


//TWO WAYS TO DO IT.

    strcpy(s2,s1);
    strncpy(s2,s1,2);

    cout<<s2<<endl;
}
*/
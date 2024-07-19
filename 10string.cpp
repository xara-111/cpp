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







// INFORMATIONS AND NOTES
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
#include<string.h>
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


//2 ways to do it

    strcpy(s2,s1);
    strncpy(s2,s1,2);

    cout<<s2<<endl;
}
*/










/*
//SUBSTRING FROM MAIN STRING

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[100];
    cout<<"Enter string 1: ";
    cin>>s1;

    char s2[100];
    cout<<"Enter search for: ";
    cin>>s2;

    if(strstr(s1,s2)!=0)
    {
    cout<<strstr(s1,s2)<<endl ;      
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
*/












/*
//SUBSTRING OF CHARACHTER FROM A  STRING

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[100];
    cout<<"Enter string 1: ";
    cin>>s1;

    char s2;                        //charachter
    cout<<"Enter search for: ";
    cin>>s2;

    cout<<strchr(s1,s2)<<endl;        //Find the occurenece of character in the string
    cout<<strrchr(s1,s2)<<endl;       //Find the occurenece of character in the string from RHS
    cout<<strchr(s1,'g');             //Could also be done this way
    return 0;
}
*/











/*
//COMPARING 2 STRINGS

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[100];
    cout<<"Enter string 1: ";
    cin>>s1;

    char s2[100];
    cout<<"Enter string 2: ";
    cin>>s2;

    cout<<strcmp(s1,s2)<<endl;



// s1 > s2 = positive value
// s2 > s1 = negative value
// s1 = s2 = 0
}
*/












/*
//CONVERT STRINGS TO INTEGER
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="234";
    char s2[10]="54.78";

    long int x=strtol(s1,NULL,10);  //Converts string to long integer
    float y=strtof(s2, NULL);       //Converts string to float 

    cout<<x<<endl;  //Displays the integer form of the number in string and arithmetic operations could be performed on it.
    cout<<y<<endl;

}
*/










/*
//TOKENIZING A STRING

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="x=10;y=20;z=35";

    char *token=strtok(s1, "=;");

    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }
    return 0;
}
*/










/*
// TOKENIZATION(CUSTOMIZED)

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="x=10?y=20?z=35";     //Any symbol could be used

    char *token=strtok(s1, "=?");     //Because ? used in string

    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"=?");
    }
    return 0;
}
*/










/*
//CLASS STRING

#include<iostream>
#include<string>         //The header file required.
using namespace std;

int main()
{
    string str;         //Declaring class string
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<str<<endl;

    getline(cin,str);    //This one would work as well
    cout<<str<<endl;

    cin>>str;
    cout<<str<<endl;
    return 0;

    //It doesn't take /n as character for next string.
}
*/










/*
//MULTIPLE CLASS STRING

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<str<<endl;

    cin>>str;
    cout<<str<<endl;
    return 0;

    //It doesn't allow multiple words so each str is taking each word.
    //It doesn't take /n as character for next string.
}
*/








/*
//BASIC FUNCTIONS OF CLASS STRING

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Hello";

    //cout<<str.length()<<endl;   //To find length of string.

//Doesn't print 0 for nullptr(null pointer). Doesn't work with it.



    //cout<<str.size()<<endl;      //Same as length

    //str.resize(30);    //It'll make the capacity is 30 or more than 30.

    //cout<<str.capacity()<<endl;  //To find the capacity of the array.

    //cout<<str.max_size()<<endl;  //Maximum size of array possible by compiler

    //str.clear();                //Clear the contenets of the string

    if(str.empty())               //Checks if empty
    {
        cout<<"String is empty"<<endl;
    }
    else{
        cout<<"String is "<<str<<endl;
    }

    cout<<str<<endl;
    return 0;
}
*/










/*
// STRING (APPEND AND INSERT) FUNCTION

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="Hello";
    string str2="World";

    // str.append(" World");     //To add a new content at the end of the string

    // str.insert(3,"kk");       //To insert a something at the mentioned index   
    // str.insert(3,"apple",2);  //Insert a few mentioned letters of the given string.

    // str.replace(3,4,"aa");    //To replace few letters in a string/whole string

    // str.erase();              //To erase a string

    // str.push_back('z');       //Add a character to end of the string

    // str.pop_back();           //Remove the last character of string, backspace

    // str1.swap(str2);             //To swap 2 strings
    // cout<<str1<<" "<<str2<<endl;
}
*/









/*
//STRING FUNCTIONS AND STRING OPERATORS

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Welcome";
    string str2=" Hello";

    //char str[10];     //Making a character array to copy the string

    //s.copy(str, s.length());    //To copy the string at s to array str

    // s.copy(str,3);                //Mentioning no. of letters to be copied
    // str[3]='\0';                  // To avoid printing garbage values after copying ends
     
    // cout<<str.find("co")<<endl;   //To find occurenece of a string/char in main string
    // cout<<str.rfind('o')<<endl;   //To find occurenece of a string from right hand side

    // cout<<str.find_first_of('e')<<endl; // First occurence of a character from string 
    // cout<<str.find_last_of('e')<<endl;  // Last occurence of a character
    // cout<<str.find_first_of('l',3);     //we can mention the count starting index for searching the character
    // cout<<str.find_first_of("le");      //Will return index of either one of them

    // cout<<str.substr(3);     //prints the letters from the index mentioned till null.
    // cout<<str.substr(3,2);   //prints the letters from the index mentioned upto the 2nd given no. 
    
    // cout<<str.compare(str2);  //Compare 2 strings

    

    // cout<<str.at(2)<<endl;    //Returns the letter at a particular index
    // cout<<str[2]<<endl;       //Same as the above one

    // cout<<str.front()<<endl;   //Gives the first letter of the string
    // cout<<str.back()<<endl;    //Gives the last letter of a string

    // cout<<str+str2<<endl;      //Join or concatenate 2 string      
    

    // str2=str;           //Content of 1st string copied to 2nd string
    // cout<<str2<<endl;   //str2 becomes same as str and displays welcome

     //cout<<str<<endl;
}
*/









/*
//CLASS STRING- ITERATOR

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="today";

    string::iterator it;

    for(it=str.begin(); it!=str.end(); it++)
    {
        cout<<*it;   //Accessing all the characters of string
        *it=*it-32;  //Turns the into uppercase
    }
    cout<<str;
    cout<<endl;
}
*/









/*
//CLASS STRING- REVERSE ITERATOR
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="today";

    string::reverse_iterator it;

    for(it=str.rbegin(); it!=str.rend(); it++)
    {
        cout<<*it;   //Displays reverse of the string
    }
    //cout<<str;
    cout<<endl;
}
*/







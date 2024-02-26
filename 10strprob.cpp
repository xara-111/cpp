//PROBELMS OF STRINGS (SECTION 10)


/*
//FIND LENGTH OF THE STRING
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    cout<<"Length is "<<str.length()<<endl;
}
*/

/*
//METHOD 2: LENGTH USING ITERATOR

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    string::iterator it;

    int count=0;

    for(it=str.begin(); it!=str.end(); it++)
    {
        count++;
    }
    cout<<"Length is "<<count<<endl;
}

*/









/*
//LOWERR TO UPPERCASE USING ITERATOR

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    string::iterator it;

    for(it=str.begin(); it!=str.end(); it++)
    {
        //cout<<*it;   //Accessing all the characters of string
        *it=*it-32;  //Turns the into uppercase
    }
    cout<<str;
    cout<<endl;
}
*/

/*
//METHOD 2: WITHOUT USING ITERATION

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter string: ";
    cin.getline(str,20);

    cout<<"The given string is "<<str<<endl;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"In uppercase: "<<str<<endl;
}
*/








/*
//CALCULATE WORDS AND VOWELS IN A STRING

# include<iostream>
using namespace std;
    

int main()
{
	string str="how many words ";

	int vowels=0,consonant=0,space=0;

	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		      vowels++;
		else if(str[i]==' ')
		      space++;
		else
		      consonant++;
	}
	cout<<"vowels "<<vowels<<endl;
	cout<<"consonant "<<consonant<<endl;
	cout<<"words "<<space<<endl;
	return 0;
}
*/





/*
//TO CHECK IF A STRING IS PALINDROME

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    string rev=" ";

    int len=(int)str.length();

    rev.resize(len);

    for(int i=0,j=len-1;i<len;i++,j--)
    {
        rev[i]=str[j];
    }
    rev[len]='\0';

    if(str.compare(rev)==0)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not palindrome"<<endl;
    }
}
*/






/*
//EXTRACT USERNAME FROM EMAIL
#include<iostream>

using namespace std;

int main()
{
    string email;
    cout<<"Enter email: ";
    getline(cin,email);

    int i=(int)email.find('@');

    string uname=email.substr(0,i);

    cout<<"Username is "<<uname;
}
*/
/*
About The Ceaser Shift

Named after Julius Caesar, who used it to encode his military messages, 
the Caesar shift is as simple as a cipher gets. 
All you have to do is substitute each letter in the alphabet by shifting it right or left by a specific number of letters. 
Today, we can break this code in our sleep, 
but it took ancient codebreakers 800 years to learn how to crack it - and nearly another 800 years to come up with anything better.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string that you want to encrypt : ";  getline(cin,s);
    int n;
    cout<<"Enter the shift frequency (0 - 9): ";  cin>>n;
    int a;
    for(int i = 0 ; s[i]!='\0' ; i++)
    {
        if(s[i] == ' '){
        continue;
        }

        a = (int)s[i];
        s[i] = (char)(a + n);
    }
    cout<<"Encrypting Your Message";
    cout<<"."<<flush; sleep(1); 
    cout<<"."<<flush; sleep(1); 
    cout<<"."<<flush; sleep(1);
    cout<<endl;

    cout<<"Your Encrypted Message is :"<<s;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"                                    Created By karandeeppotato :)";
    cout<<endl;
    system("pause");
}
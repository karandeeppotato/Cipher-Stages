#include<bits/stdc++.h>
#include"disk2.h"
using namespace std;
int main()
{
    string s;
    vector<char> s_new;
    cout<<"Enter the string that you want to Decrypt : ";
    getline(cin,s);
    char ch;
    for(int i=0 ; s[i]!='\0' ; i++)
    {
        ch = disk2(s[i]);
        s_new.push_back(ch);
    }
    cout<<endl<<endl;
    cout<<"Encrypting"<<flush;
    sleep(1);
    cout<<"."<<flush;
    sleep(1);
    cout<<"."<<flush;
    sleep(1);
    cout<<"."<<flush;
    cout<<endl<<endl;
    cout<<"Your Dncrypted string is : ";
    for(auto m : s_new)
    {
        cout<<m;
    }
    return 0;
    system("pause");
}
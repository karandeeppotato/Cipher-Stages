
#include<bits/stdc++.h>
using namespace std;

char disk2(char a)
{
    vector<char> d4{' ','0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    vector<char> d3{' ','!','@','#','$','%','^','&','*','(',')','-','_','+','=','q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','8','7','9','4','5','6','1','2','3','0','?','<','>','Q','W','E','R','T','Y','U','I','O'};
    int index1;
    auto it = find(d3.begin(), d3.end(), a);
    
    if(it != d3.end())
    index1 = it-d3.begin();
    char c;
    c = d4[index1];
    return c;
}

//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    string s; cin>>s;
    if(s=="Monday")
        cout<<5;
    else if(s=="Tuesday")
        cout<<4;
    else if(s=="Wednesday")
        cout<<3;
    else if(s=="Thursday")
        cout<<2;
    else if(s=="Friday")
        cout<<1;
    else
        cout<<0;

    return 0;
}
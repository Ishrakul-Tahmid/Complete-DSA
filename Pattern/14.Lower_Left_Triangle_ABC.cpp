/*
A 
A B 
A B C 
A B C D 
A B C D E 

*/

#include<bits/stdc++.h>
using namespace std;
void pattern12(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(char ch='A'; ch<'A'+i; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main() 
{
    int n;
    cin>>n;
    pattern12(n);
    return 0;
}

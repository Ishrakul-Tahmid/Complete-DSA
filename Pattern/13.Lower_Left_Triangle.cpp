/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/

#include<bits/stdc++.h>
using namespace std;
void pattern12(int n)
{
    int s = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<s<<" ";
            s+=1;
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

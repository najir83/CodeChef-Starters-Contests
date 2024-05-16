#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t, n, mx;
    string s;
    cin>>t;
    for (int k = 1; k <= t; k++)
    {
    cin >> n;
    cin >> s;
    mx=1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            s[i]='X';
        }
        else{
            mx++;
        }
    }
    cout<<mx<<endl;
    mx=0;
    
    }
    return 0;
}

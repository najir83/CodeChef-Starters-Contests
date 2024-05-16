#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
int t;
long long x,y;
cin>>t;
for(int i=1;i<=t;i++){
    cin>>x>>y;
    if(x<1000){
        x+=1000;
        y--;
    }
    cout<<x*(1<<y)<<endl;
}
return 0;

}

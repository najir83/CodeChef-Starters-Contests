#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    
    int perimeter = 2 * (X + Y);
    
    if(perimeter >= 1000) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}


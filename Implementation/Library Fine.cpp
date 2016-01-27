#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a1, a2, a3;
    int b1, b2, b3;
    int x;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    
    if(a3<b3)
        x=0;
    else if(a3==b3)
        if(a2<b2)
            x=0;
        else if(a2==b2)
            if(a1<=b1)
                x=0;
            else
                x=15*(a1-b1);
        else
            x=500*(a2-b2);
    else
        x=10000;
    cout << x;
    return 0;
}

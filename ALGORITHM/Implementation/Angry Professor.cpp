#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, x, y, sum1=0, sum2=0, a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        for(int j=0; j<x; j++){
            cin >> a;
            if(a<=0)
                sum1++;
        }
        if(sum1>=y)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        sum1=0;
    }
    return 0;
}

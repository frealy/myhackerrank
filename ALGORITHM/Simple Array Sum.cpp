#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, z=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++)
        z += a[i];
    cout << z;
    
    return 0;
}

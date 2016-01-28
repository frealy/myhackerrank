#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n1, n2, i, a1, a2, j, x=3;
    cin >> n1 >> n2;
    int a[n1];
    for(i=0; i<n1; i++)
        cin >> a[i];
    for(i=0; i<n2; i++){
        cin >> a1 >> a2;
        for(j=a1; j<=a2; j++){
            if(a[j]<x)
                x=a[j];            
        }       
        cout << x << endl;
        x=3;
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int a[n][n], i=0, j=0;
    int sum1=0, sum2=0, sum=0;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++){
        cin >> a[i][j];
        if(i==j)
        sum1+=a[i][j];
        if(j==n-i-1)
        sum2+= a[i][j];
    }
    sum = abs(sum1-sum2);
    cout << sum;
        
    return 0;
}

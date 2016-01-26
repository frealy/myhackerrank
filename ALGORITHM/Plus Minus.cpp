#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, i=0;
    cin >> n;
    double a[n],sum1=0, sum2=0, sum3=0;
    for(i=0; i<n; i++){
        cin >> a[i];
        if(a[i]<0)
            sum1++;
        else if(a[i]==0)
            sum2++;
        else sum3++;
    }
    cout << sum3/n <<endl;
    cout << sum1/n <<endl;
    cout << sum2/n <<endl;
    return 0;
}

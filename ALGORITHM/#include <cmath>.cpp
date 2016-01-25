#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n,a,b=0;
    cin >> n;
    while (n!=0){
        cin >> a;
        b+=a;
        n--;
    }
    cout << b;
    return 0;
}

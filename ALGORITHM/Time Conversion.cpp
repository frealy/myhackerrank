#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int h, m, s;
    char c1,c2,c3;
    cin >> h >> c1 >> m >> c2 >> s >> c3; 
    if((c3=='P')&&(h!=12))
        h+=12;
    else if((c3=='A')&&(h==12))
        h-=12;
    
    if(h<10) cout << "0" << h << c1;
    else cout << h << c1;
    
    if(m<10) cout << "0" << m << c2;
    else cout << m << c2;
    
    if(s<10) cout << "0" << s;
    else cout << s;
    return 0;
}

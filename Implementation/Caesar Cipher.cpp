#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k, b;
    cin >> n;
    char s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    cin >> k;
    if(k>26)
        k=k%26;
    
    for(int i=0; i<n; i++){
        //if(s[i]!='-')
        if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122){
            if(s[i]+k>122){
                b=s[i]+k;
                s[i]=b-26;
            }
            else if((s[i]+k>90)&&(s[i]<97))
                s[i]=s[i]+k-26;
            else 
                s[i]=s[i]+k;
                
            cout << s[i];            
        }
        else
            cout << s[i];
    }   
    return 0;
}

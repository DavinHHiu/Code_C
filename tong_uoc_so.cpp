#include<bits/stdc++.h>
using namespace std;
bool nguyenTo(long n){
    if(n==2) return 1;
    if(n<2 || n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
int tonguoc(int n){
    int i=2,s=0;
    if(nguyenTo(n)) return n;
    while(n!=1){
        while(n%i==0){
            n/=i;
            s+=i;
        }
        i++;
    }
    return s;
}
int main(){
    int n,s=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        s+=tonguoc(a[i]);
    }
    cout << s;
}
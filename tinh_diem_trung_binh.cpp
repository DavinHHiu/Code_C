#include<bits/stdc++.h>
using namespace std;
void getAr(double *a,int n){
    for(int i=0;i<n;i++){
        cin >> *(a+i);
    }
}
int main(){
    int n;
    cin >> n;
    double a[n],s=0,count=0;
    getAr(a,n);
    sort(a,a+n);
    for(int i=1;i<n-1;i++){
        if(a[i]==a[n-1]) a[i]=-5;
        if(a[i]==a[0]) a[i]=-5;
    }
    for(int i=1;i<n-1;i++){
        if(a[i]>0){
            s+=a[i];
            count++;
        }
    }
    cout << fixed << setprecision(2) << s/count;
}
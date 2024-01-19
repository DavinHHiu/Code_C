#include<stdio.h>
int main(){
    int s[100000][2],n,b[100000],z=0;
    for(int i=0;i<100000;i++){
        b[i]=0;
    }
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        scanf("%d ",&s[i][0]);
        scanf("%d",&s[i][1]);
        b[s[i][0]]++;
        b[s[i][1]]++;
    }
    for(int i=0;i<n;i++){
        if(b[i]==n-1){
            printf("Yes");
            z=1;
            break;
        }
    }
    if(z==0) printf("No");
}
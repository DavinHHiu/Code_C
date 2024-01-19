#include<stdio.h>
typedef struct{
    int ts;
    int ms;
} phan_so;
phan_so input(){
    phan_so ps;
    scanf("%d %d",&ps.ts,&ps.ms);
    return ps;
}
int gcd(int a,int b){
    int s;
    while(a!=b){
        if(a>b) a-=b;
        if(a<b) b-=a;
    }
    return a;
}
int main(){
    int t,s=1,a,b,c,x,y;
    phan_so ps1,ps2;
    scanf("%d",&t);
    while(t--){
        ps1=input();
        ps2=input();
        x=gcd(ps1.ts,ps1.ms);
        y=gcd(ps2.ts,ps2.ms);
        ps1.ts/=x;
        ps1.ms/=x;
        ps2.ts/=y;
        ps2.ms/=y;
        printf("Case #%d:\n",s);
        ps1.ts=ps1.ts*ps2.ms/gcd(ps1.ms,ps2.ms);
        ps2.ts=ps2.ts*ps1.ms/gcd(ps1.ms,ps2.ms);
        ps2.ms=ps2.ms*ps1.ms/gcd(ps1.ms,ps2.ms);
        ps1.ms=ps2.ms;
        printf("%d/%d %d/%d\n",ps1.ts,ps1.ms,ps2.ts,ps2.ms);
        a=ps1.ts+ps2.ts;
        printf("%d/%d\n",a/gcd(a,ps1.ms),ps1.ms/gcd(a,ps1.ms));
        b=ps1.ts*ps2.ms;
        c=ps2.ts*ps1.ms;
        printf("%d/%d",b/gcd(b,c),c/gcd(b,c));
        if(t>0) printf("\n");
        s++;
    }
}
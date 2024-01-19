#include<stdio.h>
void incomeplus(long *current,int year){
    if(year>3){
        *current+=300000;
    }
}
int main(){
    int current,year;
    scanf("%lld %d",&current,&year);
    incomeplus(&current,year);
    printf("%lld",current);





    /*int a,b,c,*p,*q,*r,temp;
    scanf("%d %d %d",&a,&b,&c);
    p=&a;
    q=&b;
    r=&c;
    printf("%d %d %d ",a,b,c);
    printf("%d %d %d ",p,q,r);
    printf("%d %d %d\n",*p,*q,*r);
    temp=a;
    a=b;
    b=c;
    c=temp;
    printf("%d %d %d ",a,b,c);
    printf("%d %d %d ",p,q,r);
    printf("%d %d %d\n",*p,*q,*r);
    temp=q;
    q=p;
    p=r;
    r=temp;
    printf("%d %d %d ",a,b,c);
    printf("%d %d %d ",p,q,r);
    printf("%d %d %d\n",*p,*q,*r);
*/
}

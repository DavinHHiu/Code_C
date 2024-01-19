#include<stdio.h>

void getJudgeData(int *a){
    scanf("%d", a);
    while(a<0 || a>10){
        printf("nhap con me may lai");
        scanf("%d", a);
    }
}
double findLowest(int a,int b,int c,int d ,int e){
    int min=a;
    if(min>b) min=b;
    if(min>c) min=c;
    if(min>d) min=d;
    if(min>e) min=e;
    return min;
}
double findHighest(int a,int b,int c,int d ,int e){
    int max=a;
    if(max<b) max=b;
    if(max<c) max=c;
    if(max<d) max=d;
    if(max<e) max=e;
    return max;
}
void calcScore(int a,int b,int c,int d, int e){
    float s;
    s=a+b+c+d+e-findHighest(a,b,c,d,e)-findLowest(a,b,c,d,e);
    printf("diem cua may la: %lf nay con cho",s/3);
}
int main(){
    int a, b, c, d, e;
    getJudgeData(&a);
    getJudgeData(&b);
    getJudgeData(&c);
    getJudgeData(&d);
    getJudgeData(&e);
    calcScore(a,b,c,d,e);
}

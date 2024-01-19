#include<stdio.h>
#include<string.h>
typedef struct{
    char ten[100];
    char ns[100];
    double m1;
    double m2;
    double m3;
    int stt;
    double tb;
} ttts;
ttts input(int i){
    ttts ts;
    scanf("\n");
    fgets(ts.ten,sizeof(ts.ten),stdin);
    ts.ten[strlen(ts.ten)-1]='\0';
    scanf("\n");
    fgets(ts.ns,sizeof(ts.ns),stdin);
    ts.ns[strlen(ts.ns)-1]='\0';
    scanf("%lf",&ts.m1);
    scanf("%lf",&ts.m2);
    scanf("%lf",&ts.m3);
    ts.tb=(ts.m1+ts.m2+ts.m3);
    ts.stt=i;
    return ts;
}
int main(){
    int n;
    double max;
    ttts tsx[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        tsx[i]=input(i+1);
    }
    tsx[0].tb=max;
    for(int i=1;i<n;i++){
        if(tsx[i].tb>max){
            max=tsx[i].tb;
        }
    }
    for(int i=0;i<n;i++){
        if(tsx[i].tb==max){
            printf("%d %s %s %.1lf\n",tsx[i].stt,tsx[i].ten,tsx[i].ns,tsx[i].tb);
        }
    }
}

#include<stdio.h>
#include<math.h>
float delta(float a,float b,float c){
    float s;
    s=b*b-4*a*c;
    return s;
}
void deltam(float a,float b,float c){
    printf("NO");
}
void deltaduong(float a,float b,float c){
    printf("%.2f ",(-b+(sqrt(delta(a,b,c))))/(2*a));
    printf("%.2f ",(-b-(sqrt(delta(a,b,c))))/(2*a));
}
void delta0(float a,float b,float c){
    printf("%.2f ",-b/(2*a));
}
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    while(a==0 && b==0 && c==0){
        scanf("%f %f %f",&a,&b,&c);
    }
    if(a!=0 && b!=0 && c!=0){
        if(delta(a,b,c)<0) deltam(a,b,c);
        if(delta(a,b,c)>0) deltaduong(a,b,c);
        if(delta(a,b,c)==0) delta0(a,b,c);
    }
}

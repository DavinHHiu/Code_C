#include<stdio.h>
#include<math.h>
double distance(double a,double b,double c,double d){
    double s,t,h;
    s=(a-c)*(a-c);
    t=(b-d)*(b-d);
    h=sqrt(s+t);
    return h;
}
int main(){
    int t;
    double a,b,c,d;
    scanf("%d",&t);
    while(t--){
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        printf("%.4lf\n",distance(a,b,c,d));
    }
}
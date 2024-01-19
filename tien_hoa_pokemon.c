#include<stdio.h>
#include<string.h>
typedef struct{
    char ten[100];
    int can;
    int co;
    int th;
} pokemon;
pokemon input(){
    pokemon a;
    scanf("\n");
    fgets(a.ten,sizeof(a.ten),stdin);
    a.ten[strlen(a.ten)-1]='\0';
    scanf("%d",&a.can);
    scanf("%d",&a.co);
    a.th=0;
    while(a.co>=a.can){
        a.th+=a.co/a.can;
        a.co=(a.co/a.can)*2+a.co%a.can;
    }
    return a;
}
int main(){
    int s,max,t=0;
    scanf("%d",&s);
    pokemon pk[100];
    for(int i=0;i<s;i++){
        pk[i]=input();
    }
    max=pk[0].th;
    for(int i=0;i<s;i++){
        if(pk[i].th>max) max=pk[i].th;
    }
    for(int i=0;i<s;i++){
        t+=pk[i].th;
    }
    printf("%d\n",t);
    for(int i=0;i<s;i++){
        if(pk[i].th==max){
            printf("%s",pk[i].ten);
            break;
        }
    }
}
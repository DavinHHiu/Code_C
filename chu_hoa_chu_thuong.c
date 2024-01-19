/*#include<stdio.h>
void test(char c){
    if(c>='A' && c<='Z') printf("%c",c+32);
    if(c>='a' && c<='z') printf("%c",c-32);
}
void nhap(){
    char c;
    scanf("%c",&c);
    test(c);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        nhap();
        printf("\n");
    }
}*/
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d ",&t);
    while(t--){
        char a[2];
        gets(a) ;
        if(a[0]>='a' && a[0]<='z')
            printf("%c",a[0]-32);
        if(a[0]>='A' && a[0]<='Z')
            printf("%c",a[0]+32);
          printf("\n");
        }
    return 0;
}
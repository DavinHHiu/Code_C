/*#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
int main(){
    int a[100],n,b[100];
    scanf("%d",&n);
    getAr(b,n);
    for(int i=1;i<=2;i++){
        a[i]=1;
    }
    for(int i=3;i<93;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[b[i]]);
    }
}*/
#include <stdio.h>
long long fib(int n)
{
    long long a = 0, b = 1, c, i;
    if( n == 0)
        return a;
    for(i = 2; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return b;
}
void Solve()
{
  long long n,kq;
  scanf("%lld",&n);
  kq=fib(n);
  printf("%lld\n",kq);
}
int main()
{
  int t;
  scanf("%d",&t);
  while (t--)
  {
    Solve();
  }
  return 0;
}

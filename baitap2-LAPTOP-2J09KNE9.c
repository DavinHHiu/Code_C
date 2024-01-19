#include <stdio.h>
#include <math.h>

void swap(int *a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
      int n, m, k; scanf("%d", &n);
      scanf("%d", &m);
      scanf("%d", &k);
      int a[100][100];
      for(int i = 0; i < n; i++)
        for(int j = 0; j <m; j++)
          scanf("%d", &a[i][j]);
      for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
          if(a[i][k-1] > a[j][k-1]) swap(&a[i][k-1], &a[j][k-1]);
        }
      }
      for(int i = 0; i < n; i++){
        for(int j = 0; j <m; j++)
          printf("%d ", a[i][j]);
        printf("\n");
      }
    }
}

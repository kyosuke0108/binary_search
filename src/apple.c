#include <stdio.h>

int n;
int k;
int A[100000];

int Apple(int x){
   int y = 0;
   
   for(int i = 0; i < n; i++){
       if(A[i]%A[x] == 0) y += A[i]/A[x];
       else y += A[i]/A[x] + 1;
   }
   return y <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = -1;
  ub = n-1;
  
  while(ub -lb >1){
      int mid = (ub + lb) /2;
      
      if(Apple(mid)) ub = mid;
      else lb = mid;
  }

  printf("%d\n", A[ub]);
  return 0;
}

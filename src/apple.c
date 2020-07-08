#include <stdio.h>

int n;
int k;
int A[100000];

int Apple(int x){
   int y = 0;
   
   for(int i = 0; i < n; i++){
       if(A[i]%x == 0) y += A[i]/x;
       else y += A[i]/x + 1;
   }
   return y <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000;
  
  while(ub -lb >1){
      int mid = (ub + lb) /2;
      
      if(Apple(mid)) ub = mid;
      else lb = mid;
  }

  printf("%d\n", ub);
  return 0;
}

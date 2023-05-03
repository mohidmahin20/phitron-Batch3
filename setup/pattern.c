#include <stdio.h>
int main() {
   int  n;
   scanf("%d", &n);
   int s=n;
   int k=1;
   int h=2*n;
   for (int i = 1; i <=h; i++) {
      for (int j = 1; j <= s; j++) {
         printf(" ");
      }
      for(int j=1;j<=k;j++){
        printf("*");
      }
      if(i<n){
         s--;
      k+=2;
      }
      else{
        s++;
        k-=2;
      }


      printf("\n");
   }
   return 0;
}

#include<stdio.h>
#include<string.h>
int sum(int x,int y){
   int s=x+y;
    return s;
}
int main(){
   int a,b;
   scanf("%d %d",&a,&b);
  int add= sum(a,b);
   printf("%d",add);

}




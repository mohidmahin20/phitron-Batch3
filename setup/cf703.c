#include<stdio.h>
int main(){
    int n,k,l,count1=0,count2=0,d=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&k,&l);
       if(k>l){
        count1++;
       } 
       else if(k<l){
        count2++;
       }
       else{
        d++;
       }
    }
    if(count1>count2){
        printf("Mishka");
    }
    
    else if(d=n && count1==count2){
        printf("Friendship is magic!^^");
    }
    else{
        printf("Chris");
    }
   
}
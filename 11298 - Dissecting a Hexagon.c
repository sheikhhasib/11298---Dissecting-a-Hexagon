#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)==1){
        if(n>=3 && n%3==0){
            printf("1\n");
        }else{
            printf("0\n");
        }
    }
    return  0;
}

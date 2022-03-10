#include <stdio.h>

int seq(int a, int b){
    scanf("%d", &a);
    if(a==0){
        printf("b");
        return;
    }
    if(a > b) b = a;
    seq(a, b);
}

int main(){
    int a,b=0;
    seq(a,b);
}
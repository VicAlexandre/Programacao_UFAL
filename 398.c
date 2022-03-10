#include <stdio.h>

void doom(int a, int b, int count, int start){
    if(start == 0){
        printf("%d", count);
        return;
    }
    if(start%a==0 && start%b==0) count++;
    doom(a, b, count, start-1);
}

int main(){
    int a, b;
    scanf("%d\n%d", &a, &b);
    doom(a, b, 0, 50);
}
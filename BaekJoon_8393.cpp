#include <stdio.h>
//n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.


int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <=n; i++){
        sum+=i;
    }
    printf("%d",sum);
}
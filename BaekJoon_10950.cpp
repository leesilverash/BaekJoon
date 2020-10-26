#include <stdio.h>
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main(){
    int x, y;
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d %d", &x, &y);
        printf("%d\n", x+y);
    }
}
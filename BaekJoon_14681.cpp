#include <stdio.h>

/*
흔한 수학 문제 중 하나는 주어진 점이 어느 사분면에 속하는지 알아내는 것이다. 
사분면은 아래 그림처럼 1부터 4까지 번호를 갖는다. "Quadrant n"은 "제n사분면"이라는 뜻이다.
*/

int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0){
        printf("1");
    }
    else if(x < 0 && y > 0){
        printf("2");
    }
    else if(x < 0 && y < 0){
        printf("3");
    }
    else
    {
        printf("4");
    }
    
}
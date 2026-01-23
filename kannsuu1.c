#include <stdio.h>
#include <math.h>
void solveQuadratic(int a, int b, int c){
    int D;
    double x1, x2;
    D = b*b - 4*a*c;

    if (D > 0){
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
    printf("２つの実数解があります\n");
    printf("x1 =  %.2f, x2 = %.2f\n", x1, x2);
        
    }else if (D == 0){
        x1 = -b / (2*a);
    printf("１つの実数解(重解)があります\n");
    printf("x =  %.2f\n", x1);
        
    }else{
        printf("実数解がありません\n");
    }
}

int main(void){
    int a, b, c;
    
    do{
        printf("整数 a を入力してください");
        scanf("%d",&a);
    } while(a == 0);
    
    printf("整数 b を入力してください");
    scanf("%d",&b);
    
    printf("整数 c を入力してください");
    scanf("%d",&c);
    
    solveQuadratic(a, b, c);
    
    return 0;
    
}
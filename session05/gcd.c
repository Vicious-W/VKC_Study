#include <stdio.h>
int main(){

    int a,b;
    int t;
    printf("请输入要计算最大公约数的两个数：");
    scanf("%d %d", &a, &b);
    // a = 66; b = 99;
    while( b != 0){
        t = a%b;
        a = b;
        b = t;
    }
    printf("这两个数的最大公约数gcd是：%d\n", a);


    return 0;
}
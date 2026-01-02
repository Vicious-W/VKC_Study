#include <stdio.h>
int main()
{
    int amount = 0;
    int price = 0;
    
    printf("请输入您付的金额:");
    scanf("%d", &amount);
    printf("请输入商品价格是:");
    scanf("%d", &price);
    printf("找您%d元\n", amount - price);

    return 0;

}
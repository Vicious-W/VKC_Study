#include <stdio.h>

int main()
{
    // c99 特性测试：在 for喜欢内部声明变量 i
    for(int i =0; i<3; i++){
        printf("环境监察第 %d 次： Hello C99\n", i + 1);
    }

}
//43913. 身份证号校验
//数字转字符+'0' 字符转数字-‘0’
#include <stdio.h>
#include <stdlib.h>
char verifyCode(char* s)
{
    static int weight[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    static char map[] = {'1','0','X','9','8','7','6','5','4','3','2'};

    int sum = 0;
    for(int i=0; i<17; i++)
    {
        sum += (s[i]-'0') * weight[i];  // 填空
    }

    return map[sum%11];  // 填空
    
}

int main(int argc, char* argv[])
{
    printf("%c\n", verifyCode("32011119610215381"));
    printf("%c\n", verifyCode("42900819801018236"));
    return 0;
}
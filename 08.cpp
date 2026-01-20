// 输出华氏-摄氏温度转换表
// 占据6个字符宽度，靠右对齐，保留1位小数
// %6.1f 结果是 1.1
// %+6.1f 结果是 +1.1
#include <iostream>
using namespace std;
int main(){
    int lower,upper;
    cin>>lower>>upper;
    if(lower>upper)cout<<"Invalid."<<endl;
    else{
        printf("fahr celsius\n");
        for(int i=lower;i<=upper;i+=2){
            printf("%d%6.1f\n",i,5.0*(i-32)/9);
        }
    }
    return 0;
}
// #include <stdio.h>
// int main(){
//     int lower,upper;
//     scanf("%d %d",&lower,&upper);
//     if(lower>upper) {
//         printf("Invalid.\n");
//         return 0;
//     }
//     printf("fahr celsius\n");
//     for(int i=lower;i<=upper;i+=2){
//         printf("%d%6.1f\n",i,(5.0*(i-32))/9);
//     }
//     return 0;
// }
// fahr celsius
// 32   0.0
// 34   1.1
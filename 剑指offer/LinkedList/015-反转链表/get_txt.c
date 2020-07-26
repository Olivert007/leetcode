#include <stdio.h>

int main()
{
    int a[3][2] = {{1, 2},{3,4},{5,6}};   
    printf("%X\n",a);
    //输出a的地址   
    printf("%X\n",&a[2][1]);
    //M = 3，N = 2， i = 2，j = 1   
    // int c = (int ) a + (2 * 2 + 1) * sizeof(int);    
    //a + （i * N + j） * L 
    // printf("%X\n",c);                                
    //输出行优先下，a[2][1]的内存地址  
    // int d = (int ) a + (1 * 3 + 2) * sizeof(int);    
    //a + （j * M + i） * L 
    // printf("%X\n",d); 
    //输出列优先下，a[2][1]的内存地址  
    return 0;
}

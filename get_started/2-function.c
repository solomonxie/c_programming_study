
#include <stdio.h>


int main() {
    // 先要声明函数：
    int max(int num1, int num2);

    // 使用函数
    printf( "%d", max(3, 90) );
}


// 再来定义函数
int max(int num1, int num2) {
   int result;

   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}

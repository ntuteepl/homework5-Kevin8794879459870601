#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // 提示用戶輸入攝氏溫度

    scanf("%f", &celsius);

    // 轉換攝氏溫度為華氏溫度
    fahrenheit = (celsius * 9/5) + 32;

    // 顯示轉換結果
    printf("%.1f\n", fahrenheit);

    return 0;
}


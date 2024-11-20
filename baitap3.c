#include <stdio.h>

int main() {
    // Khai báo và khởi tạo hai biến có kiểu dữ liệu số nguyên
    int num1 = 15;
    int num2 = 20;

    // Tính tổng của hai biến và lưu kết quả vào một biến khác
    int sum = num1 + num2;

    // Tạo thêm các biến để lưu kết quả hiệu, tích và thương
    int difference = num1 - num2; // Hiệu
    int product = num1 * num2;    // Tích
    float quotient = (float)num1 / num2; // Thương 
    // In ra kết quả
    printf("Tổng của %d và %d là: %d\n", num1, num2, sum);
    printf("Hiệu của %d và %d là: %d\n", num1, num2, difference);
    printf("Tích của %d và %d là: %d\n", num1, num2, product);
    printf("Thương của %d và %d là: %.2f\n", num1, num2, quotient);

    return 0;
}

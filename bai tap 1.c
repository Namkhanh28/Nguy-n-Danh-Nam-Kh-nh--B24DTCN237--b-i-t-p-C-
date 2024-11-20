#include <stdio.h>

int main() {
    // Khai báo và khởi tạo biến kiểu số nguyên (integer)
    int age = 25; // Số nguyên thường được sử dụng để lưu trữ các giá trị số không có phần thập phân

    // Khai báo và khởi tạo biến kiểu số thực (floating-point)
    float height = 1.75; // Số thực với độ chính xác đơn, có thể lưu trữ các giá trị số có phần thập phân

    // Khai báo và khởi tạo biến kiểu số thực đôi (double)
    double weight = 70.5; // Số thực với độ chính xác kép, có thể lưu trữ các giá trị số có phần thập phân chính xác hơn float

    // Khai báo và khởi tạo biến kiểu ký tự (character)
    char initial = 'A'; // Ký tự đơn, thường sử dụng để lưu trữ các ký tự chữ cái hoặc ký tự đặc biệt

    // Khai báo và khởi tạo biến kiểu chuỗi ký tự (string)
    char name[] = "Alice"; // Chuỗi ký tự, là một mảng các ký tự, kết thúc bằng ký tự null '\0'

    // Khai báo và khởi tạo biến kiểu số nguyên không dấu (unsigned integer)
    unsigned int score = 100; // Số nguyên không dấu, chỉ lưu trữ các giá trị số nguyên không âm

    // Khai báo và khởi tạo biến kiểu số nguyên ngắn (short integer)
    short int temperature = -10; // Số nguyên ngắn, thường sử dụng ít bộ nhớ hơn int, lưu trữ các giá trị số nguyên

    // Khai báo và khởi tạo biến kiểu số nguyên dài (long integer)
    long int distance = 1234567890; // Số nguyên dài, có khả năng lưu trữ các giá trị số nguyên lớn hơn int

    // In ra các giá trị của các biến
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Weight: %.2f\n", weight);
    printf("Initial: %c\n", initial);
    printf("Name: %s\n", name);
    printf("Score: %u\n", score);
    printf("Temperature: %d\n", temperature);
    printf("Distance: %ld\n", distance);

    return 0;
}

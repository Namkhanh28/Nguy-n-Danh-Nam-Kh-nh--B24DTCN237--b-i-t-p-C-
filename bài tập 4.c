#include <stdio.h>

int main() {
    int chieu_dai = 5; // Khởi tạo biến chièu dài và gán giá trị cho chiều dài hình chữ nhật
    int chieu_rong = 6;// Khởi tạo biến chièu rộng và gán giá trị cho chiều rộng hình chữ nhật
    int chu_vi = 2 * ( chieu_dai + chieu_rong ); // Tính chu vi
    int dien_tich = chieu_dai * chieu_rong; // Tính diện tích

    printf("Chu vi hinh chũ nhật là: %d\n", chu_vi);
    printf("Diện tích hình chữ nhật là : %d\n", dien_tich);

    return 0;
}

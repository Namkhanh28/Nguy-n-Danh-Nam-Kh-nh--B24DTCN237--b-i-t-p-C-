#include <stdio.h>
int main(){
	float toan; 
	float van;
	float anh;
    printf("Moi nhap diem Toan\n",toan);
	scanf("%f",&toan);
	printf("Moi nhap diem Van\n",van);
	scanf("%f",&van);
	printf("Moi nhap diem Tieng Anh\n"); 
	scanf("%f",&anh); 
	float tong_diem = toan + van + anh;
		printf ("tong diem la %.2f\n", tong_diem);
	float diem_trung_binh = tong_diem / 3 ;
		printf("Diem trung binh là %.2f\n", diem_trung_binh); 
	return 0; 
} 

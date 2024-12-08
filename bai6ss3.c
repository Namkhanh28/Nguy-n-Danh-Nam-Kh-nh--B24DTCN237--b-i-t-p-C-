#include <stdio.h>

int main(){
	float chieu_cao; 
	float canh_day; 
	float dien_tich_tam_giac;
	printf("Nhap gia tri chieu cao\n",chieu_cao);
	scanf("%f",&chieu_cao); 
	printf("Nhap gia tri canh day\n",canh_day );
	scanf("%f",&canh_day);
	 dien_tich_tam_giac = (chieu_cao*canh_day)/2;
	 printf("Dien tich tam giac là %.2f\n",dien_tich_tam_giac);
}

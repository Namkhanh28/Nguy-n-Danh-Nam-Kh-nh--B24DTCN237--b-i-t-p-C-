#include<stdio.h>
#define PI 3,14 
float main(){
	float bankinh , chu_vi ,dien_tich;
	printf ("Nhap ban kinh hinh tron\n");
	scanf("%f",&bankinh);
	 
    chu_vi = 2*bankinh*PI;
	dien_tich = bankinh*bankinh*PI ;
    printf("chu vi hinhh tron là %f\n",chu_vi);
    printf("dien tich hinh tron là %f\n",dien_tich);
	return 0; 
} 

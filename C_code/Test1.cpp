#include"stdio.h"
#include"math.h"

int main(){
	int a,b,c;
	printf("Nhap vao ba he so a, b, c : ");
	scanf("%f%f%f",&a,&b,&c);
	giaiphuongtrinhbac2(a,b,c);
}

void giaiphuongtrinhbac2(float a, float b, float c){
	float delta = (b*b)-4*a*c;
	if(delta > 0){
		printf("\nPhuong trinh co hai nghiem phan biet: ");
		printf("\nX1 = %f",((-b)+math.sqrt(delta))/(2*a));
		printf("\nX2 = %f",((-b)-math.sqrt(delta))/(2*a)));
	}
	else if(delta == 0){
		printf("\nPhuong trinh co nghiem kep : ");
		printf("\nX1 = X2 = %f",(-b)/(2*a));
	}
	else{
		printf("Phuong trinh vo nghiem !!!");
	}
}
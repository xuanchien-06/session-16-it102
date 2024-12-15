#include <stdio.h>
//khai bao ham
void giatri();
//ham main
int main(){
	int x = 5;
	int y = 10;
	// in ra gia tri ban dau 
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	giatri(&x, &y);
	printf("Sau khi doi gia tri\n x = %d\n y = %d ", x, y);
	
	return 0;
}
//logic ham
void giatri(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

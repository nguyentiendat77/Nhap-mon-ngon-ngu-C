#include <stdio.h>

int main(void){
 //khai bao bien
 int n;
 //nhap xuat gia tri
 printf("nhap n = ");
 scanf("%d", &n);
 //kiem tra n la so chan hay so le hay bang 0
 if ( n > 0){
 	if(n % 2 == 0){
 		printf("%d la so chan",n);
	}else{
 	printf("%d la so le",n);
    }
	}else if(n == 0){
 	printf("%d = 0 ");
 }
  
  return 0;
}

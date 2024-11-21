#include<stdio.h>
int main(){
    // khỏi tạo biến 
    float Celsius,Fahrenheit;
    // yêu cầu người dùng nhập Celsius
     printf("hay nhap Celsius ");
     scanf("%f", &Celsius);
     // tính toán
     Fahrenheit = Celsius * 9/5 + 32;
     printf("Fahrenheit = %.2f",Fahrenheit);
    return 0;
}

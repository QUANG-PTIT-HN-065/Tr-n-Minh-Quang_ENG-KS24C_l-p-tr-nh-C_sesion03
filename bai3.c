#include<stdio.h>
int main(){
    // khai bao biến 
    const float PI = 3.14;
    float r,perimeter,acreage;
    // yêu cầu người dùng nhập bán kính 
    printf("hay nhap ban kinh hinh tron");
    scanf("%f",&r);
    // tính toán 
    perimeter = 2 * PI * r;
    acreage = r * r * PI;
    // in ra màn hình 
    printf("chu vi hnh tron la %.2f \n",perimeter);
    printf("dien tich hinh tron la %.2f",acreage);

    return 0;
}
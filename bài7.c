#include<stdio.h>
int main(){
    // bước 1 khai báo biến 
    // bước 2 yêu cầu người dùng nhập số nguyên có 4 chữ sô 
    // bước 3 lấy ra từng phần tử 
    // bước 4 cộng các phần tử lại 
    // bước 5 in ra màn hình 
    int number,tong;
    printf("hay nhap mot so nguyen co 4 chu so");
    scanf("%d",&number);
    tong = (number / 1000) + (number / 100 % 10) + (number / 10 % 10) + (number % 10);
    printf("%d",tong);
    return 0;
} 
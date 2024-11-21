#include<stdio.h>
int main(){
    // khai báo biến 
    int day,chieucao,acreage;
    // yêu cầu người dùng nhập độ dài cạnh và chiều cao 
    printf("hay nhap day");
    scanf("%d",&day);
    printf("hay nhap chieu cao");
    scanf("%d",&chieucao);
    // tính toán 
    acreage = 0.5 * day * chieucao;
    // in ra màn hình 
    printf("dien tich cau tam giac la %d",acreage);

    return 0;
}
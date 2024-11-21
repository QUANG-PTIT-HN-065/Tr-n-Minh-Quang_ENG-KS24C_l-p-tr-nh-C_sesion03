#include<stdio.h>
int main(){
    int num1,num2,num3;
    float sum,average;
    printf("nhap diem mon toan ");
    scanf("%d", &num1);
    printf("nhap diem mon van ");
    scanf("%d",&num2);
    printf("nhap mon tieng anh ");
    scanf("%d", &num3);
    sum = num1 + num2 + num3;
    printf("tong diem la %.2f \n",sum);
    average = sum / 3;
    printf("trung binh tong la %.2f",average);
    return 0;
}
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "area.h"

//定義圓周率
#define PI 3.14

using namespace std;

//結構
struct data{
    char name[10];
    char gender;
    int math;
};
int main(){
    //顯示個人資料 .h檔
    h29();
    
    //struct結構
    struct data st[2] = {{"Mary", 'M', 90}, {"Caryy", 'F', 78}};
    for (int i = 0; i < 2; i++) {
        printf("%s\n", st[i].name);
        printf("%c\n", st[i].gender);
        printf("%d\n", st[i].math);
    }

    //一維陣列
    printf("\n");
    printf("一維陣列\n");
    int num[] = {1,2,3,4,5};
    int eng[] = {54,21,87,98,64};
    int ppp[] = {78,22,90,89,14};
    printf("編號\t英文\t化學\t總分\n");
    for(int i = 0; i < 5; i++){
        int total = eng[i] + ppp[i];
        printf("%d\t%d\t%d\t%d\n",num[i],eng[i],ppp[i],total);
    }

    //二維陣列
    printf("\n");
    printf("二維陣列");
    int num1[] = {1,2,3,4,5};
    int score[][2] = {{42,69},{84,29},{90,32},{53,88},{53,22}};
    printf("\n編號\t英文\t理化\t總分\n");
    for(int i = 0; i < 5; i++){
        int total = score[i][0] + score[i][1];
        printf("%d\t%d\t%d\t%d\n",num1[i % 5],score[i][0],score[i][1],total);
    }

    //找出最大
    printf("\n");
    printf("找出最大");
    int maxnum[] = {44,22,77,43,29};
    int size = sizeof(maxnum)/sizeof(maxnum[0]);
    int max = maxnum[0];
    for(int i = 1; i < size; i++){
        if(maxnum[i] > max){
            max = maxnum[i];
        }
    }
    printf("\n最大值:%d\n",max);
    
    //計算次方
    printf("\n");
    printf("計算次方");
    int x = 5;
    int n = 2;
    int xn = pow(x,n);
    printf("\n%d的%d次方為%d\n",x,n,xn);

    //計算面積
    printf("\n");
    printf("計算面積");
    int r = 5;
    printf("\n圓形面積:%d",ca(r));

}

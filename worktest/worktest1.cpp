#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "test.h"

struct stu{
    char gender;
    char name[10];
    int math;
};

int main(){
    //個人資訊
    namedispalay();
    
    //struct結構
    struct stu st[2] ={{'M',"POPO",89},{'F',"MOMO",78}};
    for (int i=0; i < 2; i++){
        // printf("%c\n",st[i].gender);
        // printf("%s\n",st[i].name);
        // printf("%d\n",st[i].math);
        printf("%c %s %d\n",st[i].gender,st[i].name,st[i].math);
    }
    //一維陣列
    int num[]={1,2,3};
    int math[]={65,89,56};
    int eng[]={90,67,89};
    printf("號碼\t數學\t英文\t總分\n");
    for (int i=0;i<3;i++){
        int total = math[i]+eng[i];
        printf("%d\t%d\t%d\t%d\n",num[i],math[i],eng[i],total);

    }

    //二維陣列
    int num1[]={1,2,3};
    int twost[][2]={{57,32},{98,100},{56,32}};
    printf("\n號碼\t理化\t國文\t總分\n");
    for(int i=0;i<3;i++){
        int total = twost[i][0]+twost[i][1];
        printf("%d\t%d\t%d\t%d\n",num1[i % 3],twost[i][0],twost[i][1],total);
    }

    //找最小
    int minnum[]={53,33,52,87,37};
    int size = sizeof(minnum)/sizeof(minnum[0]);
    int min = minnum[0];
    for (int i=0; i<size;i++){
        if(minnum[i]<min){
            min = minnum[i];
        }
    }
    printf("\n最小值:%d\n",min);

    //x的n次方
    int x = 8;
    int n = 2;
    int xn =pow(x,n);
    printf("\n%d的%d次方為%d\n",x,n,xn);

    //求體積 面積
    int r = 5;
    int h = 8;
    int bas = 6;
    printf("\n圓柱體體積:%d",cul(r,h));
    printf("\n矩形面積:%d",ba(h,bas));
    printf("\n圓形面積:%d",cu(r));
    printf("\n三角形面積:%d",bu(h,bas));

    printf("\n");
    
    //開檔
    FILE * fp;
    char nu[5][10];
    int j =0;
    int chi[5],var[5];
    fp = fopen("/Users/blackwhite/Desktop/Vs_Github/C/worktest/text.txt","r");
    if(fp == NULL){
        printf("no");
    }else{
        while(feof(fp)==0){
            fscanf(fp,"%s%d%d",&nu[j],&var[j],&chi[j]);
            printf("%s%d%d\n",nu[j],var[j],chi[j]);
            j++;
            fflush(stdin);
        }
        printf("\n");
        fclose(fp);
    }
    
}


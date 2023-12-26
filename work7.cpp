#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(void){


struct data{
    char name[10];
    char gender;
    int math;
};

struct data student1;
strcpy(student1.name,"andy");
student1.gender='M';
student1.math=90;

struct data student2={"mary",'F',78};

cout << student1.name <<endl;
cout << student1.gender <<endl;
cout << student1.math <<endl;

cout << student2.name <<endl;
cout << student2.gender <<endl;
cout << student2.math <<endl;

system("pause");
return 0;
}
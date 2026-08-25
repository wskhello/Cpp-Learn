#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 10;
    const int *p1;//声明一个只读类型的整型指针变量 -> 指针指向的值只读，指针本身可以改
    p1 = &b;
    //*p1 = 99;要修高指针指向的值时会报错

    int *const p2 = &a;//p2是一个不可修改的指针常量,用于存放能够修改的整型变量 -> 指针本身不能改，一旦初始化，不能再指向别的变量，指向的值可以修改
    *p2 = 90;
    //p2 = &b;要修还指针的指向会报错
    return 0;
}
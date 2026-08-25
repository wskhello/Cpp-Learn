#include <iostream>
using namespace std;

int main(){
    /**
     *    -* 符号两种含义:
     *          -声明时:*p,表示变量p, 是指针变量(存放内存地址)
     *          -使用时:*p,表示取指针p执行内存区域的数据
     *    -& 符号两种含义:
     *          -表示取变量内存地址
     *          -表示引用,取别名
     * 
     */
    int num = 10;
    int *p = NULL;//声明整型指针变量p,并对其初始化,此时为空指针
    p = &num;//指针变量p存储num的地址，也就是指针p指向num
    cout<<p<<endl;//输出num的地址
    cout<<*p<<endl;//输出10

    int &b = num;// b是num的别名，b和num是同一块内存
    cout<<num<<endl;
    cout<<b<<endl;
    b = 99;// num的值也会变成99
    cout<<num<<endl;


    return 0;
}
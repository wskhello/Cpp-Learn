#include <iostream>
using namespace std;

void Demo(){
    int arr[] = {1,2,3};
    int *p = arr;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
}

int main(){

    Demo();
    return 0;
}
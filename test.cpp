#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    /*int *pa;
     pa = &i;
     *pa = 2*/
    //上面注释中的写法是不对的，指针变量必须要初始化之后才能进行其它操作
    int i = 3;
    int *str = NULL;
    str = &i;
    cout <<*str<<endl;
    i+=1;
    *str = i;
    cout <<*str<<endl;
    *str = 100;
    cout <<*str<<endl;
    return 0;
}

#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
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

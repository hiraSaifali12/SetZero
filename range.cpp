#include <iostream>
using namespace std;
void fun(int a,int b){
     while(a<=b){
         cout<<a<<" ";
         a++;
     }
 }

int main() {
 int s=10;
 int e=15;
 fun(s,e);
    return 0;
}

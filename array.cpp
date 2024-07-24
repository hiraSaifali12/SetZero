#include <iostream>
using namespace std;
int main() {
    int arr[5]= {1,2,6,4,5};
    //swap the array
    int start=0;
    int end=4;
    while(start<end){
        int temp=arr[end];
        arr[end]=arr[start];
        arr[start] = temp;
        start++;
        end--;
        
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}

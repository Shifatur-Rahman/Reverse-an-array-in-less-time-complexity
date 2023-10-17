#include <iostream>
using namespace std;
int main(){

    int arr[] = {1,2,3,4};
    int sizeArr = sizeof(arr)/sizeof(arr[0]);

    int i, temp;

    for(i=0; i<sizeArr/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[sizeArr-i-1];
        arr[sizeArr-i-1] = temp;
    }

    for(i=0; i<sizeArr; i++){
        cout<<arr[i]<<" ";
    }

}

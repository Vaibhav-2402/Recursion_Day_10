#include<iostream>
using namespace std;

void insertion_sort(int *arr, int n){
    //base case
    if(n <= 1){
        return;
    }
    //recursive call
    insertion_sort(arr, n-1);

    int last = arr[n-1];
    int j = n-2;

    while(j >= 0 && arr[j] > last){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;

}


int main()
{

    int arr[9] = {1, 4, 67, 43, 89, 76, 23, 14, 12};

    insertion_sort(arr,9);

    for(int i = 0; i<9; i++) {
        cout << arr[i] << "  ";
    }
    return 0;
}
#include <iostream>
using namespace std;

// int swap(int a , int b){
//     int temp = 0;
//     temp = a;
//     a = b;
//     b = temp;
// }

int main(int argc, char const *argv[])
{
	cout << "Reverse Of Array" << endl;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}
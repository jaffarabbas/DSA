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
	cout << "Swap Alternative Of Array" << endl;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i=i+2)
    {
        swap(arr[i],arr[i+1]);
    }
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
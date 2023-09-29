#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
    int arr[] = {10, 20, 30};
    int(&ref)[3] = arr;

    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl; // 10  20  30
    cout << ref[0] << " " << ref[1] << " " << ref[2] << endl; // 10  20  30

    return 0;
}
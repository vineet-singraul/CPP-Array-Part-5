// #include <iostream>
// using namespace std;
// int main()
// {
//     //    remove all ocurrence   keep first occurence
//     int arr[] = {1, 2, 1, 2, 3};   
//     int n = 5;
//     for (int i = 0; i < n / 2; ++i)
//     {
//         if (arr[i] != arr[n - i - 1])
//         {
//             cout << "not pallindrome";
//             return 0;
//         }
//     }

//     cout << "pallindrome";
// }





#include <iostream>
using namespace std;

int main() {
    int arr[5] = {11, 22, 33, 22, 11};
    int size = 5;
    int brr[5];

    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;

    for (int i = 0; i < size; ++i) {
        brr[i] = arr[i];
    }

    cout << "Array after swapping:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << brr[i] << endl;
    }

    bool isPalindrome = true;
    for (int i = 0; i < size / 2; ++i) {
        if (brr[i] != brr[size - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}

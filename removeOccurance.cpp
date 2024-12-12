#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,2,3,2,1};
    int result[]={};
    int resultSize = 0;

    for (int i = 0; i < 5; ++i) {
        bool isUnique = true;
        for (int j = 0; j < 5; ++j) {
            if (arr[i] == arr[j] && i != j) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            result[resultSize++] = arr[i];
        }
    }

    cout << "Unique values after removing repeated ones: ";
    for (int i = 0; i < resultSize; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

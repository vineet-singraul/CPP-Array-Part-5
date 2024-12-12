#include <iostream>
using namespace std;
int main()
{
    int arr[] = {11, 22, 33, 44, 55};
    int brr[] = {};
    for(int i = 0 ; i<5 ; ++i)
    {
        brr[i]=arr[i];
    }

    for(int i = 0 ; i<5 ;++i){
        cout<<brr[i]<<endl;

    }
}

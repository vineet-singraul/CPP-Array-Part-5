

#include <iostream>
using namespace std;
int main()
{
int arr[]={10,20,30,40,50};
for(int i=0;i<4;++i)
{
    if(arr[i]>arr[i+1])
    {
        cout<<"not ascending";
        return 0;
    }
}
cout<<"ascending";
}
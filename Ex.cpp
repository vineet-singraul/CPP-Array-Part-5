#include <iostream>
using namespace std;
int main()
{
  int arr[]={1,2,1,3,2};
  for(int i=0;i<5;++i)
  {
    int counter=1;
for(int j=i+1;j<5;++j)
{
    if(arr[i]==arr[j])
    {
        counter++;
        arr[j]=-1;
    }
}
if(arr[i]!=-1)
cout<<"value of"<<arr[i]<<"="<<counter<<endl;

  }
}

// function object in cpp

#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;
int main()
{

    // function object (functor): function wrapped in a class so that it availabe like an object 

    int arr[] = {1,98,3,4,12,15};
    // sort(arr, arr+6);
    sort(arr,arr+6,greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    

return 0;
}

#include <iostream>
using namespace std;

int findmin(int[],int size);

int main()
{
    int array[6]={74,10,23,785,-5,7};
    cout<<"smallest element of array is: " << findmin(array,5)<<endl;
    return 0;
}

int findmin(int array[],int counter)
{
    int smallest;
    if (counter==1)
        return array[0];
    else
    {
        smallest = findmin (array+1,counter-1);
        if (smallest<array[0])
            return smallest;
        else
        return array[0];
    }
}


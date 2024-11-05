/*
Lecture 2.1: Collections in C++

Collections are a set of objects that are stored in a single variable.
They are used to store multiple values in a single variable. Collections can be of different types.

Collections in C++ are:
1. Arrays -> fixed size, ordered, indexed, static (a python list with some features from tuples)
{can access elements by index
and can change them , cant change size by adding or removing elements}
int arr[6] = {1, 2, 3, 4, 5 , 8};

1.2D Arrays -> fixed size, ordered, indexed

2. Vectors -> resizable, dynamically sized, ordered, indexed (dynamic array)

3. Lists -> resizable, doubly linked, ordered, indexed, dynamic
4. Sets -> unordered, no duplicates,
5. Maps -> unordered, no duplicates, key-value pairs
*/

#include <iostream>
using namespace std;

void findTheSumOfTheElements()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    cout << "the sum of the array elemnts is equal to " << sum << endl;
};

void checkTheSizeOfTheArray()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int arraySize = sizeof(arr) / sizeof(arr[0]);
};


void twoDimentionalArray()
{
    int array1[3] = {1, 2, 3};
    int array2[3] = {4, 5, 6};
    int array3[3] = {7, 8, 9};
    int BigArray[3] // num of arrays
    [3] // nm of elements
     = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};


     //accessing the elements

     cout<<BigArray[1][1]<<endl;
}

int main()
{
    twoDimentionalArray();
    checkTheSizeOfTheArray();
    findTheSumOfTheElements();

    return 0;
}

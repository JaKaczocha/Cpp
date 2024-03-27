#include <iostream>

template <typename T>
T maxn(T arr[], int size);

template <> char* maxn<char*>(char* arr[], int size);

int main()
{
    int arr1[5] = { 8,9,1,3,7 };
    double arr2[4] = { 3.5,1.9,2.5,3.1 };
    char a[] = "array";
    char b[] = "array2";
    char c[] = "tawern;";
    char d[] = "efgij..";
    char g[] = "asdf";

    char* arr3[5] = { a,b,c,d,g};
    std::cout << maxn(arr1,5) << std::endl;
    std::cout << maxn(arr2, 4) << std::endl;
    std::cout << maxn(arr3, 5) << std::endl;
}

template <typename T>
T maxn(T arr[], int size)
{
    T max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

template<>
char* maxn(char* arr[], int size)
{
    char* max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (strlen(max) < strlen(arr[i]))
        {
            max = arr[i];
        }
    }
    return max;

}


#include <iostream>

struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    chaff arr1[2] = { {"game",2}, {"taern",1} };
    std::cout << arr1[0].dross << "  " << arr1[0].slag << std::endl;
    std::cout << arr1[1].dross << "  " << arr1[1].slag << std::endl;


    chaff* arr2 = new chaff[2];


    strcpy_s(arr2[0].dross,sizeof arr2[0].dross,"karamba");
    strcpy_s(arr2[1].dross,sizeof arr2[1].dross, "2d");
    arr2[0].slag = 33;
    arr2[1].slag = 33;
    std::cout << std::endl;
    std::cout << arr2[0].dross << "  " << arr2[0].slag << std::endl;
    std::cout << arr2[1].dross << "  " << arr2[1].slag << std::endl;

    delete[] arr2;
   
}


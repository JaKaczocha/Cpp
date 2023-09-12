#include "SquareMatrix.hpp"

SquareMatrix lessZeros(const SquareMatrix& sm1, const SquareMatrix& sm2)
{
    int zeros1{0}, zeros2{0};

    for(int i = 0; i < sm1.size; i++)
    {        
        for(int j = 0; j < sm1.size; j++)
        {
            if(sm1.array[i][j] == 0)
            {
                zeros1++;
            }
        }
    }

    for(int i = 0; i < sm2.size; i++)
    {        
        for(int j = 0; j < sm2.size; j++)
        {
            if(sm2.array[i][j] == 0)
            {
                zeros2++;
            }
        }
    }

    return zeros1 >= zeros2 ? sm1 : sm2;
}

int main(int argc, char* argv[])
{
    SquareMatrix sm1{6};
    SquareMatrix sm2{5};

    SquareMatrix sm3{lessZeros(sm1, sm2)};
    return 0;
}
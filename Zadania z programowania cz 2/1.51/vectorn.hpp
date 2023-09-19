#ifndef VECTORN_HPP
#define VECTORN_HPP

class vectorn
{
public:
    vectorn(int n);
    ~vectorn();
    double& at(int index);
    int dimensions();

private:
    int size;
    double* coordinates;
};

#endif

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


vectorn addV(vectorn v1, vectorn v2);


#endif

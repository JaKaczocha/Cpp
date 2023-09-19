#ifndef VECTORN_HPP
#define VECTORN_HPP

class vectorn
{
public:
    vectorn(int n);
    ~vectorn();
    double& at(int index) const;
    int dimensions() const;

private:
    int size;
    double* coordinates;
};


vectorn addV(const vectorn& v1, const vectorn& v2);


#endif

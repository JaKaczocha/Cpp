#ifndef VECT_HPP
#define VECT_HPP

class Vect
{
public:
    Vect(/* args */);
    ~Vect();

    void printDim() const;
    void inputDim();
    void add(Vect v);
private:
    static constexpr int size{10};
    double dimensions[size];
};

#endif
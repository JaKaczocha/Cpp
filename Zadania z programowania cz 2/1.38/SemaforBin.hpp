#ifndef SEMAFOR_BIN_HPP
#define SEMAFOR_BIN_HPP

class SemaforBin
{
public:
    SemaforBin(/* args */);
    ~SemaforBin();
    void book();
    void free();
    bool status() const;
private:
    bool isFree;
};

inline bool SemaforBin::status() const
{
    return isFree;
}

#endif
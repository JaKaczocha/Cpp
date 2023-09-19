#ifndef WRITING_HPP
#define WRITING_HPP

class writing
{
public:
    writing();
    writing(const writing& cpy);
    writing(const char array[]);
    ~writing();
    void add(const writing wr);
    void add(const char array[]);
    int lenght() const;
    const char* getStr() const;
private:
    char* str;
};

#endif
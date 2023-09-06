#ifndef PERSONAL_DATA_HPP
#define PERSONAL_DATA_HPP

#include <string>

class PersonalData
{
public:
    PersonalData(/* args */);
    ~PersonalData();

    void setName(std::string name);
    void setLastname(std::string lastname);
    void setAddress(std::string address);

    std::string getName() const;
    std::string getLastname() const;
    std::string getAddress() const;

    void printAllData() const;

private:
    std::string name, lastname, address;
};


inline void PersonalData::setName(std::string name)
{
    this->name = name;
}
inline void PersonalData::setLastname(std::string lastname)
{
    this->lastname = lastname;
}
inline void PersonalData::setAddress(std::string address)
{
    this->address = address;
}

inline std::string PersonalData::getName() const
{
    return this->name;
}
inline std::string PersonalData::getLastname() const
{
    return this->lastname;
}
inline std::string PersonalData::getAddress() const
{
    return this->address;
}


#endif

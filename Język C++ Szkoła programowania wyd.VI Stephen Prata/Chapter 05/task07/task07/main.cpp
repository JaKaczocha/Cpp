#include <iostream>


struct Car
{
    std::string brand_;
    int yearbook_;
};

int main()
{
    using std::cout;
    using std::cin;

    int quantity;
    cout << "How many cars you want to catalog: ";
    cin >> quantity;
    cin.ignore();
    Car* cars = new Car [ quantity ];

    for ( int i = 0; i < quantity; i++ )
    {
        cout << "enter car brand: ";
        getline( cin, cars[ i ].brand_);
        cout << "enter car yearbook: ";
        cin >> cars[ i ].yearbook_;
        cin.ignore();
    }

    for ( int i = 0; i < quantity; i++ )
    {
        cout << cars[ i ].yearbook_ << " " << cars[ i ].brand_ << std::endl;

    }

    delete [] cars;
    cars = NULL;

    return 0;
}

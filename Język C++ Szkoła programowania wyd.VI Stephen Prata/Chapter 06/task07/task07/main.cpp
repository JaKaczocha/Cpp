#include <iostream>
#include <cctype>

using namespace std;

bool isvowel( char ch );

int main()
{

    char last = ' ', ch;
    int consonants = 0, vowels = 0, other = 0;

    cout << "enter text:\n";
    while( cin.get(ch) && ch != 'q' )
    {
        if( ' ' == last || '\n' == last )
        {
            if( isalpha( ch ) )
            {
                if( isvowel(ch) )
                {
                    vowels++;
                }
                else
                {
                    consonants++;
                }
            }
            else if( !isspace(ch) )
            {
                other++;
            }
        }

        last = ch;
    }
    cout << "words start with vowels: " << vowels << endl;
    cout << "words start with consonants: " << consonants << endl;
    cout << "other words: " << other << endl;


    return 0;
}

bool isvowel( char ch )
{
    const int size{12};
    const char vowels[ size ]{'a','e','i','o','u','y','A','E','I','O','U','Y'};

    for( int i = 0; i < size; i++ )
    {
        if( ch == vowels[ i ] )
        {
            return true;
        }
    }

    return false;

}

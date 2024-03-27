#include <iostream>
using namespace std;

const int SLEN = 30;
struct student {
    char fullname[SLEN] = "";
    char hobby[SLEN] = "";
    int ooplevel;
};

int getinfo(student array[], int size);
void display1(student st);
void display2(const student* st);
void display3(const student arr[], int size);

int main()
{
    cout << "Podaj wielkosc grupy: ";
    int classSize;
    cin >> classSize;
    while (cin.get() != '\n')
    {
        continue;
    }
    student *ptrStudent = new student[classSize];
    int entered = getinfo(ptrStudent, classSize);

    for (int i = 0; i < entered; i++)
    {
        display1(ptrStudent[i]);
        display2(&ptrStudent[i]);
    }

    display3(ptrStudent, classSize);
    delete[] ptrStudent;
    cout << "DONE\n";


}

int getinfo(student array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        
        cout << "enter fullname: ";
        
        cin.getline(array[i].fullname, SLEN, '\n');
        
        
        if (array[i].fullname == "")
        {
            return i;
        }
        

        cout << "enter hobby: ";
        
        cin.getline(array[i].hobby, SLEN,'\n');
        
        
        
        bool entered = false;
        while (!entered)
        {
            cout << "enter ooplevel(int): ";
            cin >> array[i].ooplevel;

            if (!cin.good())
            {
                cin.clear();
                cin.ignore(1000,'\n');
            }
            else
            {
                while (cin.get() != '\n')
                {
                    continue;
                }
                entered = true;
            }
        }
        
    }

    return size;
}
void display1(student st)
{
    cout << "student name: " << st.fullname << endl;
    cout << "student hobby: " << st.hobby << endl;
    cout << "student ooplevel: " << st.ooplevel << endl;
}
void display2(const student *st)
{
    cout << "student name: " << (*st).fullname << endl;
    cout << "student hobby: " << (*st).hobby << endl;
    cout << "student ooplevel: " << (*st).ooplevel << endl;
}
void display3(const student arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\nstudent number: " << i + 1 << endl;
        display2(&arr[i]);
    }
}
#include <iostream>

using namespace std;

class Student
{
    string name;
    string surname;
    int yearOfBirth;
    int nr_index;

public:
    Student(string n, string s, int yob, int nix)
    {
        name = n;
        surname = s;
        yearOfBirth = yob;
        nr_index = nix;
    }

    string getName()
    {
        return name;
    }

    string getSurname()
    {
        return surname;
    }

    int getYearOfBirth()
    {
        return yearOfBirth;
    }

    int getNrIndex()
    {
        return nr_index;
    }

    void display_student()
    {
        cout<<"Student: "<<name<<","<<surname<<", Year of birth: "<<yearOfBirth<<", nr_index "<<nr_index<<endl;
    }
};

int main()
{
    Student J("John","Doe",1970,3333);
    J.display_student();
    return 0;
}

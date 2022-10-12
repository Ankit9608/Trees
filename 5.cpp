// dynamic constructor
#include <iostream>
#include <string.h>
using namespace std;
class emp
{
    char *ename;
    char *edesign;
    float sal;
    int len1, len2;

public:
    emp()
    {
        len1 = 0;
        len2 = 0;
        ename = new char[len1 + 1];
        edesign = new char[len2 + 2];
    }
    emp(char *name, char *desgn, float salr)
    {
        len1 = strlen(name);
        len2 = strlen(desgn);
        ename = new char[len1 + 1];
        strcpy(ename, name);
        edesign = new char[len2 + 1];
        strcpy(edesign, desgn);
        sal = salr;
    }
    void display()
    {
        cout << "Employee information " << endl;
        cout << "Name: ";
        puts(ename);
        cout << "Designation: ";
        puts(edesign);
        cout << edesign;
        cout << "salary: " << endl;
        cout << sal << endl;
    }
};
int main()
{
    char *name, *designation;
    float salary;
    int ch;
    do
    {
        cout << "Enter the name: " << endl;

        gets(name);
        cout << "\nEnter the designation:" << endl;
        gets(designation);
        cout << "\nEnter the salary: " << endl;
        cin >> salary;
        emp obj(name, designation, salary);
        obj.display();
        cout << "\nEnter 0 to quite\n";
        cin >> ch;

    } while (ch != 0);
    return 0;
}
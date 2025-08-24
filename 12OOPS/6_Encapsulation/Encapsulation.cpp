// Emcapsulation in cpp

#include <iostream>
#include <string>
using namespace std;

// Class that represents a person
class Person
{

    // private members that will be hidden
    int socialID;
    string name;

public:
    // Constructor using initialization list
    Person(string n, int id) : name(n), socialID(id) {}

    // Getter for name (const as it doesn't modify the object)
    string getName() const
    {
        return name;
    }

    // Optional setter for name
    void setName(string newName)
    {
        name = newName;
    }

    // Validates the socialID
    bool validateID() const
    {
        return (socialID >= 0 && socialID <= 1001);
    }
};

int main()
{
    Person p1("hemant", 503);

    if (!p1.validateID())
        cout << "Invalid SocialID\n";

    cout << "Name: " << p1.getName() << endl;

    return 0;
}
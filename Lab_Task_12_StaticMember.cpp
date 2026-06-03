#include<iostream>
using namespace std;
class Employee
{
    private:
    int id;
    string name;
    static string company;
    public:
    Employee(int i, string n)
    {
        id = i;
        name = n;
    }
    static void displayCompany()
    {
        cout<<"Company: "<<company<<endl;
    }
};

string Employee::company = "Tech Solutions";

int main() 
{
    Employee e1(1, "Ali");
    Employee e2(2, "Umer");

    Employee::displayCompany();
    
    return 0;
}
#include<iostream>
using namespace std;
class HospitalStaff
{
    string name;
    public:
    HospitalStaff(string n)
    {
        name = n;
    }

    virtual void performDuty()=0;
};
class Doctor:public HospitalStaff
{
    public:
        Doctor():HospitalStaff("Doctor"){}
    void performDuty()
    {
        cout<<"Doctor is diagnosing patients."<<endl;
    }
};
class Nurse : public HospitalStaff
{
    public:
        Nurse():HospitalStaff("Nurse"){}
    void performDuty()
    {
        cout<<"Nurse is assisting  patients."<<endl;
    }
};
class Receptionist : public HospitalStaff
{
    public:
        Receptionist():HospitalStaff("Receptionist"){}
    void performDuty()
    {
        cout<<"Receptionist is managing appointments."<<endl;
    }
};

int main()
{
    Doctor doc;
    Nurse nrs;
    Receptionist rec;

    doc.performDuty();
    nrs.performDuty();
    rec.performDuty();
    
    return 0;
}
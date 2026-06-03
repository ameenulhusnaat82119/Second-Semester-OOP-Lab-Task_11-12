#include <iostream>
using namespace std;

class Distance
{

    private:
        int feet;
        int inches;

    public:
        void inputDistance()
		{

            cout<<"Enter feet and inches: ";
            cin>>feet>>inches;
        }

        friend void addDistance(Distance d1, Distance d2);
};

void addDistance(Distance d1, Distance d2)
{

    int totalFeet = d1.feet + d2.feet;
    int totalInches = d1.inches + d2.inches;

    totalFeet += totalInches / 12;
    totalInches = totalInches % 12;

    cout<<"\nTotal Distance: "<<totalFeet<<" feet, "<<totalInches<<" inches"<<endl;
}

int main()
{
    Distance dist1, dist2;

    dist1.inputDistance();
    dist2.inputDistance();

    addDistance(dist1, dist2);

    return 0;
}
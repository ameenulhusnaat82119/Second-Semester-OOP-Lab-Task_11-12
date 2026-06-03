#include<iostream>
using namespace std;
class Box
{
    private:
    int length;

    public:
    Box(int l)
    {
        length = l;
    }

    friend void displayLength(Box b);
};

void displayLength(Box b)
{
    cout<<"Length: "<<b.length<<endl;
}

int main()
{
    
    Box bo(10);
    displayLength(bo);
    return 0;

}
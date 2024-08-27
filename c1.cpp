//Saanvi
//Prn: 23070123110 
//experiment 11: 

#include <iostream>
using namespace std;

class cube
{
    public:
    int height = 2;
    int width = 3;
    int length = 5;
};

int main()
{
    cube c1;
    int vol = c1.height*c1.width*c1.length;
    cout<<"volume:"<<vol<<endl;
}
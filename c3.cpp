// Saanvi
// Prn: 23070123110
// Experiment 11:

#include <iostream>
using namespace std;

class Cube {
    private:
        int height = 5;  // Height
        int width = 9;   // Width 
        int length = 6;  // Length 

    public:
         
        double volume() {
            // Calculate the volume and return it as a double
            return static_cast<double>(height * width * length);
        }
};

int main() {
    Cube cube1;  
    cout << "Volume: " << cube1.volume() << endl;
    return 0;  
}

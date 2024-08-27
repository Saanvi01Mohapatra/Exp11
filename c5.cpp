// Saanvi
// Prn: 23070123110
// Experiment 11:

#include <iostream>
using namespace std;

class Volume {
    public:
        float length;
        float breadth;
        float height;
        
       
        void input() {
            cout << "Enter the value of length: ";
            cin >> length;
            cout << "Enter the value of breadth: ";
            cin >> breadth;
            cout << "Enter the value of height: ";
            cin >> height;
        }

       
        float vol() {
            return length * breadth * height;
        }

      
        void display() {
            float volume = vol();
            cout << "The volume is " << volume << endl;
        }
};

int main() {
    Volume volume1; 
    volume1.input();  
    volume1.display(); 
    return 0;          
}

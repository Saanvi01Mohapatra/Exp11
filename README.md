# Exp-11

## Aim
To study and implement Classes and Objects

## Apparatus
Vs Code

## Theory
*Class:* A blueprint for creating objects. It defines a data structure by combining data (attributes) and methods (functions) that operate on the data.Class Definition: A class is defined using the class keyword followed by the class name and a block of code that includes its attributes and methods.

*Object:* An instance of a class. It represents a specific realization of the class, holding actual values for the attributes defined by the class.An object is created by instantiating the class. This involves calling the class as if it were a function.
Sure! Here's a detailed explanation of the concepts related to classes and objects, including definitions, syntax, access specifiers, and variable types.



### Access Specifiers Comparison

Access specifiers determine the visibility and accessibility of class members (attributes and methods).

| Access Specifier | Definition                                      | Visibility                       | Example Usage     |
|------------------|-------------------------------------------------|---------------------------------|--------------------|
| *Public*       | Members are accessible from outside the class. | Unrestricted access.             | self.attribute1 |
| *Private*      | Members are accessible only within the class.  | Restricted access (prefix with __). | self.__attribute1 |
| *Protected*    | Members are accessible within the class and subclasses. | Limited access (prefix with _). | self._attribute1 |

### Global and Local Variables

*Global Variables*:
- *Definition*: Variables declared outside of any function or class. They are accessible from any part of the program.
- *Scope*: Entire program.


*Local Variables*:
- *Definition*: Variables declared within a function or block. They are only accessible within that function or block.
- *Scope*: Limited to the function or block where they are declared.
### CODE VOLUME::
```
//Saanvi
//Prn: 23070123110 
//experiment 11: 

#include <iostream>
using namespace std;

class cube
{
    public:
    int height = 3;
    int width = 3;
    int length = 3;
};

int main()
{
    cube c1;
    int vol = c1.height*c1.width*c1.length;
    cout<<"volume:"<<vol<<endl;
}
```
### OUTPUT:
```
Running] cd "c:\Users\Saanvi\Desktop\CDS\" && g++ classes_and_objects_!.cpp -o classes_and_objects_! && "c:\Users\Saanvi\Desktop\CDS\"classes_and_objects_!
volume:27

[Done] exited with code=0 in 0.381 seconds
```
### CODE 2:
```
//Saanvi
//Prn: 23070123110
//experiment 11: 

#include <iostream>
using namespace std;

class cube
{
    public:
    int height = 2;
    int width = 2;
    int length = 2;
    int volume()
    {
        int v; 
        v = height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    cout<<"volume: "<<cube1.volume()<<endl;
}
```
### OUTPUT:
```
[Running] cd "c:\Users\Saanvi\Desktop\CDS\" && g++ classes_and_objects_2.cpp -o classes_and_objects_2 && "c:\Users\Saanvi\Desktop\CDS\"classes_and_objects_2
volume: 8

[Done] exited with code=0 in 0.38 seconds

```
### CODE 3:
```
// Saanvi
// Prn: 23070123110
// Experiment 11:

#include <iostream>
using namespace std;

class Cube {
    private:
        int height = 4;  
        int width = 2;   
        int length = 2; 

    public:
         
        double volume() {
            
            return static_cast<double>(height * width * length);
        }
};

int main() {
    Cube cube1;  
    cout << "Volume: " << cube1.volume() << endl;
    return 0;  
}
```
### OUTPUT:
```
[Running] cd "c:\Users\Saanvi\Desktop\CDS\" && g++ classes_and_objects_3.cpp -o classes_and_objects_3 && "c:\Users\Saanvi\Desktop\CDS\"classes_and_objects_3
Volume: 16

[Done] exited with code=0 in 0.377 seconds
```
### CODE 4:
```
// Saanvi
// Prn: 23070123110
// Experiment 11:
using namespace std;
class cube{
    public:
    double height=1.2;
    double width=2.5;
    double length=3.8;
     double volume(){
     double v;
     v=height*width*length;
        return v;
}
void disp_vol(double vol){
    cout<<"Volume:"<<vol<<endl;

}
};
int main()
{
    cube cube1;
    double vol=cube1.volume();
    cube1.disp_vol(vol);
}
```
### Output:
```
[Running] cd "c:\Users\Saanvi\Desktop\CDS\" && g++ classes_and_objects_4.cpp -o classes_and_objects_4 && "c:\Users\Saanvi\Desktop\CDS\"classes_and_objects_4
Volume:11.4

[Done] exited with code=0 in 0.378 seconds
```
### CODE 5:
```
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
```
### output:
```
PS C:\Users\Saanvi\Desktop\CDS> cd "c:\Users\Saanvi\Desktop\CDS\" ; if ($?) { g++ classes_and_objects_5.cpp -o classes_and_objects_5 } ; if ($?) { .\classes_and_objects_5 }

Enter the value of length: 2
Enter the value of breadth: 3
Enter the value of height: 2
The volume is 12
```
### Summary

- *Classes* define the structure and behaviors of objects. They encapsulate data and methods into a single unit.
- *Objects* are instances of classes and hold specific data values.
- *Access Specifiers* (Public, Private, Protected) control how and where class members can be accessed and modified.
- *Global Variables* are accessible throughout the entire program, while *Local Variables* are restricted to the function or block where they are defined.

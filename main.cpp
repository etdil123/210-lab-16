// COMSC 210 | Lab 16: Color Class w/ Constructors | Ethan Dilk
#include <iostream>
#include <iomanip>
using namespace std;

const int WIDTH = 10;

class Color{
    // private member attributes 
    private:
        int red;
        int green;
        int blue;
    public:
        // default constructor
        Color() {red = 0; green = 0; blue = 0;}

        // parameter constructor
        Color(int r, int g, int b) {red = r; green = g; blue = b;}

        // partial constructor
        Color(int r, int g) {red = r, green = g;}

        // getters
        int getRed() { return red; }
        int getGreen() { return green; }
        int getBlue() {return blue; }
        
        // setters
        void setRed(int r) { red = r; }
        void setBlue(int b) { blue = b; }   
        void setGreen(int g) { green = g; }

        // Color print method
        void print(){
            cout << "Color Output: " << endl;
            cout << setw(WIDTH) << "Red: " << red << endl;
            cout << setw(WIDTH) << "Green: " << green << endl;
            cout << setw(WIDTH) << "Blue: " << blue << endl;
            cout << endl;
        }
};  

int main(){
    // Creating instances of Color objects - utilizing different constructors
    Color color1();
    
    




    return 0;
}
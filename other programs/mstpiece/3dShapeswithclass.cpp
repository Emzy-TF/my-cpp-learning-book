#include <iostream>
#include <string>
#include <cmath> // for cmath functions

using namespace std;

//Challenge Task: Create a Class of 3D Shapes with attributes and methods to calculate volume and surface area.
class Shape3D {
public:
    string shapeName;
    double length, width, height, radius, Radius, mass;
    // Attributes for volume and surface area
    double area, areaa, areab;
    double totalsurfaceArea, volume, density;
   
    // Method to calculate Area
    void calculateArea() {
        if (shapeName == "Cube") {
            area = 6 * (length * length); // Area of a cube
        } else if (shapeName == "Cuboid") {
            area = length * width;
            areaa = length * height;
            areab = width * height; // Area of a cuboid
        } else if (shapeName == "Sphere") {
            area = M_PI * (radius * radius); // Area of a sphere
        } else {
            cout << "Shape not recognized for area calculation.\n";
        }
    }

    // Method to calculate Total Surface Area
    void calculateTotalSurfaceArea() {
        if (shapeName == "Cube") {
            totalsurfaceArea = 6 * area; // Total surface area of a cube
        } else if (shapeName == "Cuboid") {
            totalsurfaceArea = 2 * (area + areaa + areab); // Total surface area of a cuboid
        } else if (shapeName == "Sphere") {
            totalsurfaceArea = 4 * area; // Total surface area of a sphere
        } else {
            cout << "Shape not recognized for total surface area calculation.\n";
        }
    }
    
    // Method to calculate Volume
    void calculateVolume() {
        if (shapeName == "Cube") {
            volume = area * length; // Volume of a cube
        } else if (shapeName == "Cuboid") {
            volume = area * height; // Volume of a cuboid
        } else if (shapeName == "Sphere") {
            volume = (4.0 / 3.0) * area * radius; // Volume of a sphere
        } else {
            cout << "Shape not recognized for volume calculation.\n";
        }
    }

    // Method to calculate Density
    void calculateDensity() {
        if (volume != 0) {
            density = mass / volume; // Density = mass / volume
        } else {
            density = 0; // Avoid division by zero
            cout << "Volume is zero, cannot calculate density.\n";
        }
    }
};

//function to create an objects from the Shape3D class
int CreateShape3DObject() {
    Shape3D shapes[3];

    shapes[0].shapeName = "Cube";
    shapes[1].shapeName = "Cuboid";
    shapes[2].shapeName = "Sphere";

   
   while (true)
   {
   cout << "Choose a shape to calculate its area, total surface area, volume, and density:\n";
   cout << "1. Cube\n"<< "2. Cuboid\n"<< "3. Sphere\n";
   int input, dywc, choice;
   cin >> input;
   cout << "\nYou chose: " << shapes[input - 1].shapeName << "\n";

    if (input < 0 || input > 4) {
      cout<< "\nInvalid choice. Please enter 1, 2, or 3.\n";
      continue; // Restart the loop for valid input
    } else {
    switch (input) {
    case 1: {
        cout << "Enter the length of the cube and its mass (separated by space) in Meters(M) and Kilogram(Kg): ";
        cin >> shapes[0].length >> shapes[0].mass;
        shapes[0].calculateArea();
        shapes[0].calculateTotalSurfaceArea();
        shapes[0].calculateVolume();
        shapes[0].calculateDensity();
        cout << "Area of Cube: " << shapes[0].area << "m2" << endl;
        cout << "Total Surface Area of Cube: " << shapes[0].totalsurfaceArea << "m2" << endl;
        cout << "Volume of Cube: " << shapes[0].volume << "m3" << endl;
        cout << "Density of Cube: " << shapes[0].density << "Kg/m3" << endl;
        break;
    }
    case 2: {
        cout << "Enter the length, width, height, and mass of the cuboid (separated by space) in Meters(M) and Kilogram(Kg): ";
        cin >> shapes[1].length >> shapes[1].width >> shapes[1].height >> shapes[1].mass;
        shapes[1].calculateArea();
        shapes[1].calculateTotalSurfaceArea();
        shapes[1].calculateVolume();
        shapes[1].calculateDensity();

        cout << "Area of Cuboid: " << shapes[1].area << "m2" << endl;
        cout << "Total Surface Area of Cuboid: " << shapes[1].totalsurfaceArea << "m2" << endl;
        cout << "Volume of Cuboid: " << shapes[1].volume << "m3" << endl;
        cout << "Density of Cuboid: " << shapes[1].density << "Kg/m3" << endl;
        break;
    }
    case 3: {
        cout << "Enter the radius of the sphere and mass of the sphere (separated by space) in Meters(M) and Kilogram(Kg): ";
        cin >> shapes[2].radius >> shapes[2].mass;
        shapes[2].calculateArea();
        shapes[2].calculateTotalSurfaceArea();
        shapes[2].calculateVolume();
        shapes[2].calculateDensity();
        cout << "Area of Sphere: " << shapes[2].area << "m2" << endl;
        cout << "Total Surface Area of Sphere: " << shapes[2].totalsurfaceArea << "m2" << endl;
        cout << "Volume of Sphere: " << shapes[2].volume << "m3" << endl;
        cout << "Density of Sphere: " << shapes[2].density << "Kg/m3"<< endl;
        break;
    }
    default:
        cout << "\nInvalid choice. Please enter 1, 2, or 3.\n";
        continue; // Restart the loop for valid input
    }
   cout << "\nDo you want to calculate for another shape? (1 for yes, 0 for no, 9 for Quit): "; 
   cin >> choice;
   if (choice == 1) {
       cout << "\nRestarting...\n" << endl;
       continue; // Restart the loop for another calculation
   } else if (choice == 0) {
       cout << "Exiting the program." << endl;
       break; // Exit the loop
   } else if (choice == 9) {
       cout << "Quitting the program." << endl;
       return 0; // Exit the program
   } else {
       cout << "Invalid choice. Please enter 1, 0, or 9.\n";
   }
   }
   } 
   return 0; // Exit the function
}

// Main Function
int main() {
    cout << "3D Shapes Area, Total Surface Area, Volume, and Density Calculator\n";
    CreateShape3DObject(); // Call the function to create an object from the Shape3D class

    return 0;
}

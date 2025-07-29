#include <iostream>
#include <cmath>
using namespace std;

// Rectangle
void drawRectangle(int width, int height) {
    cout << "Rectangle:\n";
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j)
            cout << "* ";
        cout << endl;
    }
    cout << endl;
}

// Right-Angled Triangle
void drawTriangle(int height) {
    cout << "Right-Angled Triangle:\n";
    for (int i = 1; i <= height; ++i) {
        for (int j = 0; j < i; ++j)
            cout << "* ";
        cout << endl;
    }
    cout << endl;
}

// Circle (approximate)
void drawCircle(int radius) {
    cout << "Circle (Approximate):\n";
    float aspectRatio = 2.0; // characters are taller than wide
    for (int y = -radius; y <= radius; ++y) {
        for (int x = -radius * aspectRatio; x <= radius * aspectRatio; ++x) {
            if (x*x/(aspectRatio*aspectRatio) + y*y <= radius*radius)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int choice;
    cout << "Choose shape to draw:\n";
    cout << "1. Rectangle\n2. Triangle\n3. Circle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int w, h;
            cout << "Enter width and height: ";
            cin >> w >> h;
            drawRectangle(w, h);
            break;
        }
        case 2: {
            int h;
            cout << "Enter height: ";
            cin >> h;
            drawTriangle(h);
            break;
        }
        case 3: {
            int r;
            cout << "Enter radius: ";
            cin >> r;
            drawCircle(r);
            break;
        }
        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}

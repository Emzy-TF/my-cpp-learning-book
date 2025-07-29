#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int width = 80;
    const int height = 25;

    for (int y = height; y >= -height; y--) {
        for (int x = 0; x <= width; x++) {
            double fx = (x - width / 2.0) / 10.0;
            double fy = sin(fx);

            int graphY = (int)(fy * height / 2);
            if (y == graphY)
                cout << "*";
            else if (y == 0)
                cout << "-"; // X-axis
            else if (x == width / 2)
                cout << "|"; // Y-axis
            else
                cout << " ";
        }
        cout << endl;
    }
}

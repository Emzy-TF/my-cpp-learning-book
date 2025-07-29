#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>
#include <string>
using namespace std;

const int width = 240;   // wider width to fit screen
const int height = 60;   // taller height
const double cubeSize = 70.0;  // even larger cube to fill screen properly
const int frameCount = 60;

// Clear screen
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Project 3D point to 2D
void projectPoint(double x, double y, double z, int& screenX, int& screenY) {
    double scale = 100.0 / (z + 300.0);  // adjust scale for big cube
    screenX = (int)(width + x * scale);
    screenY = (int)(height - y * scale);
}

// Draw cube frame with Y-axis rotation and X-axis slant
string drawCubeFrame(double angle) {
    string screen(2 * width * (2 * height + 1), ' ');

    double half = cubeSize / 2.0;
    double vertices[8][3] = {
        {-half, -half, -half}, {half, -half, -half}, {half, half, -half}, {-half, half, -half},
        {-half, -half, half},  {half, -half, half},  {half, half, half},  {-half, half, half}
    };

    int edges[12][2] = {
        {0,1},{1,2},{2,3},{3,0}, // back face
        {4,5},{5,6},{6,7},{7,4}, // front face
        {0,4},{1,5},{2,6},{3,7}  // connections
    };

    int sx1, sy1, sx2, sy2;
    for (int i = 0; i < 12; ++i) {
        double x1 = vertices[edges[i][0]][0];
        double y1 = vertices[edges[i][0]][1];
        double z1 = vertices[edges[i][0]][2];

        double x2 = vertices[edges[i][1]][0];
        double y2 = vertices[edges[i][1]][1];
        double z2 = vertices[edges[i][1]][2];

        // Rotate around Y-axis and slant around X-axis
        double x1r = x1 * cos(angle) + z1 * sin(angle);
        double z1r = -x1 * sin(angle) + z1 * cos(angle);
        double y1r = y1 * cos(0.6) - z1r * sin(0.6);
        z1r = y1 * sin(0.6) + z1r * cos(0.6);

        double x2r = x2 * cos(angle) + z2 * sin(angle);
        double z2r = -x2 * sin(angle) + z2 * cos(angle);
        double y2r = y2 * cos(0.6) - z2r * sin(0.6);
        z2r = y2 * sin(0.6) + z2r * cos(0.6);

        projectPoint(x1r, y1r, z1r, sx1, sy1);
        projectPoint(x2r, y2r, z2r, sx2, sy2);

        int dx = abs(sx2 - sx1), dy = abs(sy2 - sy1);
        int sx = (sx1 < sx2) ? 1 : -1;
        int sy = (sy1 < sy2) ? 1 : -1;
        int err = dx - dy;

        while (true) {
            if (sx1 >= 0 && sx1 < 2 * width && sy1 >= 0 && sy1 < 2 * height)
                screen[sy1 * 2 * width + sx1] = '#';
            if (sx1 == sx2 && sy1 == sy2) break;
            int e2 = 2 * err;
            if (e2 > -dy) { err -= dy; sx1 += sx; }
            if (e2 < dx) { err += dx; sy1 += sy; }
        }
    }

    // Convert screen to string
    string output;
    for (int y = 0; y < 2 * height; ++y) {
        for (int x = 0; x < 2 * width; ++x) {
            output += screen[y * 2 * width + x];
        }
        output += '\n';
    }
    return output;
}

int main() {
    string frames[frameCount];
    for (int i = 0; i < frameCount; ++i) {
        double angle = 2 * M_PI * i / frameCount;
        frames[i] = drawCubeFrame(angle);
    }

    while (true) {
        for (int i = 0; i < frameCount; ++i) {
            clearScreen();
            cout << frames[i] << endl;
            this_thread::sleep_for(chrono::milliseconds(1000 / 60));
        }
    }

    return 0;
}

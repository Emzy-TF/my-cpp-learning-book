// graphicwd.h
#pragma once
#include <windows.h>

extern HWND hwnd;

bool initGraphicsWindow(HINSTANCE hInstance, int width, int height);
void renderFrame();
void shutdownGraphicsWindow();

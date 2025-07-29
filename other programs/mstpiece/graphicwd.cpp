// graphicwd.cpp
#include "graphicwd.h"

const wchar_t CLASS_NAME[] = L"MyWindowClass";
const wchar_t* windowTitle = L"Rotating Cube";

HWND hwnd;
HINSTANCE gInstance;

bool initGraphicsWindow(HINSTANCE hInstance, int width, int height)
{
    gInstance = hInstance;

    WNDCLASSW wc = {};  // FIXED: use WNDCLASSW for Unicode
    wc.lpfnWndProc = DefWindowProcW;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClassW(&wc);  // FIXED: use RegisterClassW

    hwnd = CreateWindowExW(
        0, CLASS_NAME, windowTitle,
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, width, height,
        NULL, NULL, hInstance, NULL
    );

    if (hwnd == NULL)
        return false;

    ShowWindow(hwnd, SW_SHOW);
    return true;
}

void renderFrame()
{
    // Placeholder rendering logic
}

void shutdownGraphicsWindow()
{
    DestroyWindow(hwnd);
}

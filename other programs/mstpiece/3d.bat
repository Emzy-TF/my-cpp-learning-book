@echo off
:: Compile another C++ program
g++ 3dShapeswithclass.cpp -o 3dShapes

:: Check for compilation errors
if errorlevel 1 (
    echo Compilation failed with errors.
    exit /b 1
)

:: Run the compiled program
echo Running the compiled program...
3dShapes.exe
pause

@echo off
:: Compile another C++ program
g++ rtcube.cpp -o rt
:: Check for compilation errors
if errorlevel 1 (
    echo Compilation failed with errors.
    exit /b 1
)
:: Run the compiled program
echo Running the compiled program...
rt.exe
pause
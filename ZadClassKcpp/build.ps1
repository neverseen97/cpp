$env:Path = "C:\msys64\mingw64\bin;$env:Path"
$CXX = "g++"
$CXXFLAGS = @("-Wall", "-std=c++11")
$INC_DIR = (Resolve-Path "include").Path
$SRC_DIR = (Resolve-Path "src").Path

Write-Host "Creating build directory..."
if (!(Test-Path "build")) {
    New-Item -ItemType Directory -Path "build" -Force
}

Write-Host "Compiling ZadKcpp.cc..."
& $CXX $CXXFLAGS -I"$INC_DIR" -c "$SRC_DIR/ZadKcpp.cc" -o "build/ZadKcpp.o"
if ($LASTEXITCODE -ne 0) { 
    Write-Host "Error compiling ZadKcpp.cc"
    exit $LASTEXITCODE 
}

Write-Host "Compiling main.cc..."
& $CXX $CXXFLAGS -I"$INC_DIR" -c "main.cc" -o "build/main.o"
if ($LASTEXITCODE -ne 0) { 
    Write-Host "Error compiling main.cc"
    exit $LASTEXITCODE 
}

Write-Host "Linking..."
& $CXX "build/ZadKcpp.o" "build/main.o" -o "ZadKcpp.exe"
if ($LASTEXITCODE -ne 0) { 
    Write-Host "Error linking"
    exit $LASTEXITCODE 
}

Write-Host "Build completed successfully!"

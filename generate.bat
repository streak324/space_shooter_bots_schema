@echo off
setlocal enabledelayedexpansion

echo Generating Go files...
pushd .\generated\go
flatc --go --gen-onefile ..\..\game_state.fbs
if !errorlevel! neq 0 (
    echo Error generating Go files
    popd
    exit /b 1
)
popd

echo Generating C++ files...
pushd .\generated\cpp
flatc --cpp --gen-onefile ..\..\game_state.fbs
if !errorlevel! neq 0 (
    echo Error generating C++ files
    popd
    exit /b 1
)
popd

echo Generating Rust files...
pushd .\generated\rust
flatc --rust --gen-onefile ..\..\game_state.fbs
if !errorlevel! neq 0 (
    echo Error generating Rust files
    popd
    exit /b 1
)
popd

echo Generating C files...
pushd .\generated\c
flatcc --reader --common_reader ..\..\game_state.fbs
if !errorlevel! neq 0 (
    echo Error generating C files
    popd
    exit /b 1
)
popd

echo All files generated successfully!

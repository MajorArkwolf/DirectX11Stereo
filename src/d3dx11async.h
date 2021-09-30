#pragma once

#include <d3dcompiler.h>

HRESULT D3DX11CompileFromFile(LPCWSTR filename, LPCSTR functionName, 
        LPCSTR profile, unsigned flag1, 
        unsigned flag2, ID3D10Blob **shader, 
        ID3D10Blob **errorMsgs) {

    // Only half converted
    return D3DCompileFromFile(filename, NULL, NULL, functionName, profile, flag1, flag2, shader, errorMsgs);
}
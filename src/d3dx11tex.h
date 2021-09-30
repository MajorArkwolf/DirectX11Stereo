#pragma once
#include <WICTextureLoader.h>

HRESULT D3DX11CreateShaderResourceViewFromFile (
    ID3D11Device             *pDevice,
    const wchar_t            *pSrcFile,
    int                     *pLoadInfo,
    ID3D11Resource           **pPump,
    ID3D11ShaderResourceView **ppShaderResourceView,
    HRESULT                  *pHResult) 
{
    return DirectX::CreateWICTextureFromFile(pDevice, pSrcFile, pPump, ppShaderResourceView, size_t(0));
}
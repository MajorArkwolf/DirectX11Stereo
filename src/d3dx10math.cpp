#pragma once
#include "d3dx10math.h"

void D3DXMatrixTranspose(D3DXMATRIX* out, D3DXMATRIX* in) {
    DirectX::XMMATRIX result = DirectX::XMLoadFloat4x4(in);
    DirectX::XMMatrixTranspose(result);
    DirectX::XMStoreFloat4x4(out, result);
}

D3DXMATRIX* D3DXMatrixPerspectiveFovLH(
  D3DXMATRIX *pOut,
  float      fovy,
  float      Aspect,
  float      zn,
  float      zf
) {
    DirectX::XMStoreFloat4x4(pOut, DirectX::XMMatrixPerspectiveFovLH(fovy, Aspect, zn, zf));
    return pOut;
}

D3DXMATRIX* D3DXMatrixIdentity(
    D3DXMATRIX *pOut
) {
    DirectX::XMStoreFloat4x4(pOut, DirectX::XMMatrixIdentity());
    return pOut;
}

D3DXMATRIX* D3DXMatrixOrthoLH(
    D3DXMATRIX *pOut,
    float      w,
    float      h,
    float      zn,
    float      zf
) {
    DirectX::XMStoreFloat4x4(pOut, DirectX::XMMatrixOrthographicLH(w, h, zn, zf));
    return pOut;
}

D3DXMATRIX* D3DXMatrixRotationYawPitchRoll(
    D3DXMATRIX *pOut,
    float      Yaw,
    float      Pitch,
    float      Roll
) {
    DirectX::XMStoreFloat4x4(pOut, DirectX::XMMatrixRotationRollPitchYaw(Roll, Pitch, Yaw));
    return pOut;
}

 

D3DXVECTOR3* D3DXVec3TransformCoord(
    D3DXVECTOR3 *pOut,
    D3DXVECTOR3 *pV,
    D3DXMATRIX  *pM
) {
    DirectX::XMMATRIX m = DirectX::XMLoadFloat4x4(pM);
    DirectX::XMVECTOR v = DirectX::XMLoadFloat3(pV);
    DirectX::XMStoreFloat3(pOut, DirectX::XMVector3TransformCoord(v, m));
    return pOut;
}

D3DXMATRIX* D3DXMatrixLookAtLH(
       D3DXMATRIX  *pOut,
 const D3DXVECTOR3 *pEye,
 const D3DXVECTOR3 *pAt,
 const D3DXVECTOR3 *pUp
) {
    DirectX::XMStoreFloat4x4(pOut, DirectX::XMMatrixLookAtLH(DirectX::XMLoadFloat3(pEye), DirectX::XMLoadFloat3(pAt), DirectX::XMLoadFloat3(pUp)));
    return pOut;
}

D3DXVECTOR3* D3DXVec3Cross(
       D3DXVECTOR3 *pOut,
 const D3DXVECTOR3 *pV1,
 const D3DXVECTOR3 *pV2
) {
    DirectX::XMStoreFloat3(pOut ,DirectX::XMVector3Cross(DirectX::XMLoadFloat3(pV1), DirectX::XMLoadFloat3(pV2)));
    return pOut;
}

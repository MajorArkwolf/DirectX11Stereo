#pragma once

#include <DirectXMath.h>

#define D3DX_PI 3.14159265359f

using D3DXMATRIX = DirectX::XMFLOAT4X4;
using D3DXVECTOR3 = DirectX::XMFLOAT3;
using D3DXVECTOR2 = DirectX::XMFLOAT2;

void D3DXMatrixTranspose(D3DXMATRIX* out, D3DXMATRIX* in);

D3DXMATRIX* D3DXMatrixPerspectiveFovLH(
  D3DXMATRIX *pOut,
  float      fovy,
  float      Aspect,
  float      zn,
  float      zf
);

D3DXMATRIX* D3DXMatrixIdentity(
    D3DXMATRIX *pOut
);

D3DXMATRIX* D3DXMatrixOrthoLH(
    D3DXMATRIX *pOut,
    float      w,
    float      h,
    float      zn,
    float      zf
);

D3DXMATRIX* D3DXMatrixRotationYawPitchRoll(
    D3DXMATRIX *pOut,
    float      Yaw,
    float      Pitch,
    float      Roll
);
 

D3DXVECTOR3* D3DXVec3TransformCoord(
    D3DXVECTOR3 *pOut,
    D3DXVECTOR3 *pV,
    D3DXMATRIX  *pM
);

D3DXMATRIX* D3DXMatrixLookAtLH(
       D3DXMATRIX  *pOut,
 const D3DXVECTOR3 *pEye,
 const D3DXVECTOR3 *pAt,
 const D3DXVECTOR3 *pUp
);

D3DXVECTOR3* D3DXVec3Cross(
       D3DXVECTOR3 *pOut,
 const D3DXVECTOR3 *pV1,
 const D3DXVECTOR3 *pV2
);
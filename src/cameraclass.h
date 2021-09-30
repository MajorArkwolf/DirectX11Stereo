#pragma once

#include <d3dx10math.h>
#include "Stereoscopic.h"

class CameraClass
{
public:
	CameraClass();
	CameraClass(const CameraClass&);
	~CameraClass();

	void SetPosition(float, float, float);
	void SetRotation(float, float, float);

	D3DXVECTOR3 GetPosition();
	D3DXVECTOR3 GetRotation();

	void Render(StereoscopicEye eye = StereoscopicEye::Middle);
	void GetViewMatrix(D3DXMATRIX&);

	void SetEyeOffset(float val);
	float GetEyeOffSet();


private:
	float m_positionX, m_positionY, m_positionZ;
	float m_rotationX, m_rotationY, m_rotationZ;
	D3DXMATRIX m_viewMatrix;
	float EyeOffset = 2.0f;
};

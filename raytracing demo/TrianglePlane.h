#pragma once
#include "AbstractPlane.h"

class TrianglePlane : AbstractPlane
{
public:
	TrianglePlane(Pointf a, Pointf b, Pointf c);
	float ray_plane_collision(XRay &p);
};
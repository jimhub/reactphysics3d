/***************************************************************************
* Copyright (C) 2009      Daniel Chappuis                                  *
****************************************************************************
* This file is part of ReactPhysics3D.                                     *
*                                                                          *
* ReactPhysics3D is free software: you can redistribute it and/or modify   *
* it under the terms of the GNU Lesser General Public License as published *
* by the Free Software Foundation, either version 3 of the License, or     *
* (at your option) any later version.                                      *
*                                                                          *
* ReactPhysics3D is distributed in the hope that it will be useful,        *
* but WITHOUT ANY WARRANTY; without even the implied warranty of           *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the             *
* GNU Lesser General Public License for more details.                      *
*                                                                          *
* You should have received a copy of the GNU Lesser General Public License *
* along with ReactPhysics3D. If not, see <http://www.gnu.org/licenses/>.   *
***************************************************************************/

// Libraries
#include "SeparatingAxisAABB.h"

// We want to use the ReactPhysics3D namespace
using namespace reactphysics3d;

// Constructor
SeparatingAxisAABB::SeparatingAxisAABB() {

}

// Destructor
SeparatingAxisAABB::~SeparatingAxisAABB() {

}

// Return true if the two AABB of the bodies intersect
bool SeparatingAxisAABB::testCollisionPair(const BoundingVolume* const boundingVolume1, const BoundingVolume* const boundingVolume2) {
    // TODO : Implement this method

    // At this time this method returns true to indicate that all body pairs can collide
    return true;
}


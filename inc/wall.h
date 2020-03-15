#ifndef WALL_H
#define WALL_H

#include <glm/glm.hpp>

// A wall is defined using the 2D plane equation:
// ax + by + c = 0
// Where [a, b] is the normal of the plane
// And c is:
// -dot([a, b], (x0, y0))
// Where (x0, y0) is any point on the plane

class Wall
{
public:

   Wall(glm::vec2 normal,
        glm::vec2 startPoint,
        glm::vec2 endPoint);

private:

   glm::vec2 mNormal;
   float     mC;

   glm::vec2 mStartPoint;
   glm::vec2 mEndPoint;
};

#endif

#include "entity/transform.h"

namespace XX::Entity
{
    Transform::Transform() {}
    Transform::Transform(Vector2 position, Vector2 scale, Vector2 rotation) {}
    Transform::~Transform() {}

    Vector2 Transform::getPosition() const
    {
        return this->position;
    }
    
    Vector2 Transform::getRotation() const
    {
        return this->rotation;
    }

    Vector2 Transform::getScale() const
    {
        return this->scale;
    }
}


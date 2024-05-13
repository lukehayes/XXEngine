#ifndef XX_ENTITY_TRASFORM_H
#define XX_ENTITY_TRASFORM_H

#include "raylib.h"

namespace XX::Entity
{
class Transform {
public:
	Transform();
	Transform(Vector2 position, Vector2 scale, Vector2 rotation);
	~Transform();

	Vector2 getPosition() const;
	Vector2 getRotation() const;
	Vector2 getScale()    const;

private:
	Vector2 position;
	Vector2 scale;
	Vector2 rotation;
	
};
}

#endif // !XX_TRASFORM_H

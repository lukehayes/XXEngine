#ifndef XX_TRASFORM_H
#define XX_TRASFORM_H

#include "raylib.h"

namespace XX
{
class Transform {
public:
	Transform();
	Transform(Vector2 position, Vector2 scale, Vector2 rotation);
	~Transform();


private:
	Vector2 position;
	Vector2 scale;
	Vector2 rotation;
	
};
}

#endif // !XX_TRASFORM_H

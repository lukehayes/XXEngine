#ifndef XX_ENTITY_ENTITY
#define XX_ENTITY_ENTITY

#include "transform.h"

namespace XX::Entity
{
/**
* Base class for almost everything on the screen.
*/
class Entity {
public:
	Entity();
	~Entity();

	Entity(Entity &&) = default;
	Entity(const Entity &) = default;
	Entity &operator=(Entity &&) = default;
	Entity &operator=(const Entity &) = default;

	XX::Entity::Transform transform;

	private:
	};
}

#endif // !XX_ENTITY_ENTITY

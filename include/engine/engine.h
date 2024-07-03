#ifndef XX_ENGINE_H
#define XX_ENGINE_H

#include "raylib.h"
#include <iostream>

namespace XX
{

class Engine {
public:
	Engine();
	Engine(Engine &&) = default;
	Engine(const Engine &) = default;
	Engine &operator=(Engine &&) = default;
	Engine &operator=(const Engine &) = default;
	~Engine();


	static void printDeltaTime()
	{
        std::cout << "XX Delta: " << GetFrameTime() << std::endl;
	}

private:
	
};

}

#endif // !XX_ENGINE_H

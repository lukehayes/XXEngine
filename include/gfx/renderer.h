#ifndef XX_GFX_RENDERER
#define XX_GFX_RENDERER

#include "raylib.h"

namespace XX::GFX
{
	class Renderer {
	public:
		Renderer();
		~Renderer();

	/**
	* Clear the current frame.
	*
	* @param const Color& color.
	*/
	static void clear(const Color& color)
	{
		ClearBackground(color);
	}

	/**
	* Start the next frame ready for drawing.
	*
	* @param const Color& color.
	*/
	static void begin(const Color& color)
	{
		clear(color);
		BeginDrawing();
	}

	/**
	* Flush everything on the current frame to the screen.
	*
	*/
	static void end()
	{
        EndDrawing();
	}
	
	private:

	};

	Renderer::Renderer() {
	}

	Renderer::~Renderer() {
	}
}

#endif // !XX_GFX_RENDERER

#include "raylib.h"
#include "gfx/renderer.h"
#include <iostream>

int main() {

    InitWindow(800,600,"XXEngine");
    SetTraceLogLevel(LOG_NONE);
    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        std::cout << "Delta: " << GetFrameTime() << std::endl;

        XX::GFX::Renderer::begin(BLACK);
        XX::GFX::Renderer::end();
    }

    CloseWindow();

    return 0;
}

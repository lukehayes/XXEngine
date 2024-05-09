#include "raylib.h"

int main() {

    InitWindow(800,600,"XXEngine");
    SetTraceLogLevel(LOG_NONE);
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        //game.deltaTime = GetFrameTime();
        //printf("Delta %f \n", game.deltaTime);

        ClearBackground(Color{40,40,40,255});
        BeginDrawing();
        EndDrawing();
    }


    CloseWindow();

    return 0;
}

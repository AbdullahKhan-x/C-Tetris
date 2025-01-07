#include<iostream>
#include<raylib.h>

int main ()
{
    Color DarkBlue = {44,44,127,255};
    int const WINDOW_WIDTH = 300;
    int const WINDOW_HEIGHT = 600;
    int FPS = 60;

    InitWindow(WINDOW_WIDTH,WINDOW_HEIGHT,"C-Tetris");
    SetTargetFPS(FPS);

    while(WindowShouldClose()== false)
    {
        BeginDrawing();
        ClearBackground(DarkBlue);
        EndDrawing();
    }

    CloseWindow();
}
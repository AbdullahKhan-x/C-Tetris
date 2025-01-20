#include<raylib.h>
#include"game.h"

int main ()
{
    Color DarkBlue = {44,44,127,255};
    int const WINDOW_WIDTH = 500;
    int const WINDOW_HEIGHT = 620;
    int FPS = 60;

    Game game = Game();
    InitWindow(WINDOW_WIDTH,WINDOW_HEIGHT,"C-Tetris");
    SetTargetFPS(FPS);

    while(WindowShouldClose()== false)
    {
        BeginDrawing();
        ClearBackground(DarkBlue);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
}
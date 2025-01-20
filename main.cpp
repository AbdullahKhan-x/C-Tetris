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
#include <raylib.h>
#include "game.h"
double IsUpdateTime =0;

bool EventTriggered(double interval){
double currentTime = GetTime();
if(currentTime-lastUpdateTime >= interval){
    lastUpdateTime = currentTime;
    return true;
}
return false;
}

int main(){
    Color darkBlue ={44, 44, 127, 255};
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(60);
    Game game =Game();

    while(WindowShouldClose() == false){

        game.HandleInput();
        if(EventTriggered(0,2)){
            game.MoveBlockDown();
        }
       
        BeginDrawing();
        ClearBackground(DarkBlue);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();
}
}
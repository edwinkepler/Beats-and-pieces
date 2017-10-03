#include <SDL2/SDL.h>
#include <iostream>

const int SCR_WIDTH = 640;
const int SCR_HEIGHT = 480;

int main(int argc, char* args[]) {
    // Window we'll be rendering to and
    // Surface contained by window
    SDL_Window* window = NULL;
    SDL_Surface* screenSurface = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << ("SDL could not be initialised. SDL_Error: ");
        std::cout << SDL_GetError() << std::endl;
    } else {
        // Create window
        window = SDL_CreateWindow("01_hello_sdl", 
                                  SDL_WINDOWPOS_UNDEFINED,
                                  SDL_WINDOWPOS_UNDEFINED,
                                  SCR_WIDTH,
                                  SCR_HEIGHT,
                                  SDL_WINDOW_ALLOW_HIGHDPI);
        if(window == NULL) {
            std::cout << ("Window could not be created. SDL_Error: ");
            std::cout << SDL_GetError() << std::endl;
        } else {
            // Get window surface
            // Fill the surface with white color
            // Update the surface
            // Wait two seconds
            screenSurface = SDL_GetWindowSurface(window);
            SDL_FillRect(screenSurface,
                         NULL,
                         SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
            SDL_UpdateWindowSurface(window);
            SDL_Delay(3000);
        }
    }

    // Destroy window, quit subsystems, return OK
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

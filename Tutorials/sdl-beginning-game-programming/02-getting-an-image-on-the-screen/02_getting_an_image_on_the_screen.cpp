#include <SDL2/SDL.h>
#include <iostream>

const int SCR_WIDTH = 100;
const int SCR_HEIGHT = 100;

bool init();
bool load_media();
void close();

SDL_Window* g_window = NULL;
SDL_Surface* g_screen_surface = NULL;
SDL_Surface* g_hello_world = NULL;

bool init() {
    bool f_init = true;

    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL_Error: ";
        std::cout << SDL_GetError() << std::endl;
        f_init = false;        
    } else {
        g_window = SDL_CreateWindow("02_getting_an_image_on_the_screen",
                                    SDL_WINDOWPOS_UNDEFINED,
                                    SDL_WINDOWPOS_UNDEFINED,
                                    SCR_WIDTH,
                                    SCR_HEIGHT,
                                    SDL_WINDOW_SHOWN);
        if(g_window == NULL) {
            std::cout << "Window could not be created! SDL_Error: ";
            std::cout << SDL_GetError() << std::endl;
            f_init = false;    
        } else {
            g_screen_surface = SDL_GetWindowSurface(g_window);
        }
    }

    return f_init;
}

bool load_media() {
    bool f_load = true;

    g_hello_world = SDL_LoadBMP("hello_world.bmp");
    if(g_hello_world == NULL) {
        std::cout << "Unable to load media file! SDL_Error: ";
        std::cout << SDL_GetError() << std::endl;
        f_load = false;  
    }

    return f_load;
}

void close() {
    SDL_FreeSurface(g_hello_world);
    g_hello_world = NULL;
    SDL_DestroyWindow(g_window);
    g_window = NULL;

    SDL_Quit();
}

int main(int argc, char* args[]) {
    init();
    if(load_media()) {
        SDL_BlitSurface(g_hello_world,
                        NULL,
                        g_screen_surface,
                        NULL);
        SDL_UpdateWindowSurface(g_window);
        SDL_Delay(2000);
    }

    close();
    return 0;
}

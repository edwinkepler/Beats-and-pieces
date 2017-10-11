#include <SDL2/SDL.h>
#include <iostream>
#include <string>

const int SCR_WIDTH = 640;
const int SCR_HEIGHT = 480;

bool init();
bool load_media();
void close();

SDL_Surface* load_surface(std::string path);

SDL_Window* sur_window = NULL;
SDL_Surface* sur_screen_surface = NULL;
SDL_Surface* sur_stretched_surface = NULL;

bool init() {
    bool f_init = true;

    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL_Error: ";
        std::cout << SDL_GetError() << std::endl;
        f_init = false;        
    } else {
        sur_window = SDL_CreateWindow("04_key_presses",
                                    SDL_WINDOWPOS_UNDEFINED,
                                    SDL_WINDOWPOS_UNDEFINED,
                                    SCR_WIDTH,
                                    SCR_HEIGHT,
                                    SDL_WINDOW_SHOWN);
        if(sur_window == NULL) {
            std::cout << "Window could not be created! SDL_Error: ";
            std::cout << SDL_GetError() << std::endl;
            f_init = false;    
        } else {
            sur_screen_surface = SDL_GetWindowSurface(sur_window);
        }
    }

    return f_init;
}

bool load_media() {
    bool load = true;

    sur_stretched_surface = load_surface("press.bmp");
    if(sur_stretched_surface == NULL) {
        std::cout << "Failed to load stretching image!" << std::endl;
        load = false;
    }

    return load;
}

void close() {
    SDL_FreeSurface(sur_stretched_surface);
    sur_stretched_surface = NULL;

    SDL_DestroyWindow(sur_window);
    sur_window = NULL;

    SDL_Quit();
}

SDL_Surface* load_surface(std::string path) {
    SDL_Surface* sur_optimized_surface = NULL;

    SDL_Surface* sur_loaded = SDL_LoadBMP(path.c_str());
    if(sur_loaded == NULL) {
        std::cout << "Unable to load image" << path.c_str() << "! ";
        std::cout << "SDL Error: " << SDL_GetError();
    } else {
        sur_optimized_surface = SDL_ConvertSurface(sur_loaded, sur_screen_surface->format, 0);
        if(sur_optimized_surface == NULL) {
            std::cout << "Unable to load image" << path.c_str() << "! ";
            std::cout << "SDL Error: " << SDL_GetError();
        }

        SDL_FreeSurface(sur_loaded);
    }

    return sur_optimized_surface;
}

int main(int argc, char* args[]) {
    if(!init()) {
        std::cout << "Failed to initialize!";
    } else {
        if(!load_media()) {
            std::cout << "Failed to load media!";
        } else {
            bool quit = false;

            SDL_Event e;

            while(!quit) {
                while(SDL_PollEvent(&e) != 0) {
                    if(e.type == SDL_QUIT) {
                        quit = true;
                    }
                }

                SDL_Rect rect_stretch;
                rect_stretch.x = 0;
                rect_stretch.y = 0;
                rect_stretch.w = SCR_WIDTH;
                rect_stretch.h = SCR_HEIGHT;
                SDL_BlitScaled(sur_stretched_surface, NULL, sur_screen_surface, &rect_stretch);

                SDL_UpdateWindowSurface(sur_window);
            }
        }
    }
    close();
    return 0;
}
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <string>

const int SCR_WIDTH = 640;
const int SCR_HEIGHT = 400;

bool init();
bool load_media();
void close();
SDL_Surface* load_surface(std::string path);

SDL_Window* g_window = NULL;
SDL_Surface* sur_screen_surface = NULL;
SDL_Surface* sur_png_surface = NULL;

bool init() {
    bool f_init = true;

    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL_Error: ";
        std::cout << SDL_GetError() << std::endl;
        f_init = false;        
    } else {
        g_window = SDL_CreateWindow("04_key_presses",
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
            int img_flags = IMG_INIT_PNG;
            if(!(IMG_Init(img_flags) & img_flags)) {
                std::cout << "SDL_image could not initialize! SDL_image Error: ";
                std::cout << IMG_GetError() << std::endl;
                f_init = false;
            } else {
                sur_screen_surface = SDL_GetWindowSurface(g_window);
            }
        }
    }

    return f_init;
}

bool load_media() {
    bool f_load = true;

    sur_png_surface = load_surface("hello.png");
    if(sur_png_surface == NULL) {
        std::cout << "Failed to load PNG image" << std::endl;
        f_load = false;
    }

    return f_load;
}

void close() {
    SDL_FreeSurface(sur_png_surface);
    sur_png_surface = NULL;

    SDL_DestroyWindow(g_window);
    g_window = NULL;

    IMG_Quit();
    SDL_Quit();
}

SDL_Surface* load_surface(std::string path) {
    SDL_Surface* sur_optimized = NULL;

    SDL_Surface* sur_loaded = IMG_Load(path.c_str());
    if(sur_loaded == NULL) {
        std::cout << "Unable to load image! SDL_image Error: ";
        std::cout << IMG_GetError() << std::endl;
    } else {
        sur_optimized = SDL_ConvertSurface(sur_loaded,
                                           sur_screen_surface->format,
                                           NULL);
        if(sur_optimized == NULL) {
            std::cout << "Unable to optimize image! SDL_image Error: ";
            std::cout << IMG_GetError() << std::endl; 
        }

        SDL_FreeSurface(sur_loaded);
    }

    return sur_optimized;
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
                SDL_BlitScaled(sur_png_surface, NULL, sur_screen_surface, NULL);

                SDL_UpdateWindowSurface(g_window);
            }
        }
    }
    close();
    return 0;
}
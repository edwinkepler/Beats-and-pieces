#include <SDL2/SDL.h>
#include <iostream>
#include <string>

const int SCR_WIDTH = 100;
const int SCR_HEIGHT = 100;

enum KEY_PRESSED_SURFACE {
    DEFAULT,
    UP,
    DOWN,
    LEFT,
    RIGHT,
    TOTAL
};

bool init();
bool load_media();
void close();

SDL_Surface* load_surface(std::string path);

SDL_Window* g_window = NULL;
SDL_Surface* g_screen_surface = NULL;
SDL_Surface* g_key_press_surface[KEY_PRESSED_SURFACE::TOTAL];
SDL_Surface* g_current_surface = NULL;

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
            g_screen_surface = SDL_GetWindowSurface(g_window);
        }
    }

    return f_init;
}

bool load_media() {
    bool f_load = true;

    g_key_press_surface[KEY_PRESSED_SURFACE::DEFAULT] = load_surface("press.bmp");
    if(g_key_press_surface[KEY_PRESSED_SURFACE::DEFAULT] == NULL) {
        std::cout << "Failed to load default image!" << std::endl;
        f_load = false;
    }

    g_key_press_surface[KEY_PRESSED_SURFACE::UP] = load_surface("up.bmp");
    if(g_key_press_surface[KEY_PRESSED_SURFACE::UP] == NULL) {
        std::cout << "Failed to load up image!" << std::endl;
        f_load = false;
    }

    g_key_press_surface[KEY_PRESSED_SURFACE::DOWN] = load_surface("down.bmp");
    if(g_key_press_surface[KEY_PRESSED_SURFACE::DOWN] == NULL) {
        std::cout << "Failed to load down image!" << std::endl;
        f_load = false;
    }

    g_key_press_surface[KEY_PRESSED_SURFACE::LEFT] = load_surface("left.bmp");
    if(g_key_press_surface[KEY_PRESSED_SURFACE::LEFT] == NULL) {
        std::cout << "Failed to load left image!" << std::endl;
        f_load = false; 
    }

    g_key_press_surface[KEY_PRESSED_SURFACE::RIGHT] = load_surface("right.bmp");
    if(g_key_press_surface[KEY_PRESSED_SURFACE::RIGHT] == NULL) {
        std::cout << "Failed to load right image!" << std::endl;
        f_load = false; 
    }

    return f_load;
}

void close() {
    for(int i = 0; i < KEY_PRESSED_SURFACE::TOTAL; ++i) {
        SDL_FreeSurface(g_key_press_surface[i]);
        g_key_press_surface[i] = NULL;
    }

    SDL_DestroyWindow(g_window);
    g_window = NULL;

    SDL_Quit();
}

SDL_Surface* load_surface(std::string path) {
    SDL_Surface* loadedSurface = SDL_LoadBMP(path.c_str());
    if(loadedSurface == NULL) {
        std::cout << "Unable to load image " << path 
                    << "! SDL Error: " << SDL_GetError();
    }

    return loadedSurface;
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

            g_current_surface 
                = g_key_press_surface[KEY_PRESSED_SURFACE::DEFAULT];

            while(!quit) {
                while(SDL_PollEvent(&e) != 0) {
                    if(e.type == SDL_QUIT) {
                        quit = true;
                    } else if(e.type == SDL_KEYDOWN) {
                        switch(e.key.keysym.sym) {
                            case SDLK_UP:
                                g_current_surface = g_key_press_surface[KEY_PRESSED_SURFACE::UP];
                                break;
                            case SDLK_DOWN:
                                g_current_surface = g_key_press_surface[KEY_PRESSED_SURFACE::DOWN];
                                break;
                            case SDLK_LEFT:
                                g_current_surface = g_key_press_surface[KEY_PRESSED_SURFACE::LEFT];
                                break;
                            case SDLK_RIGHT:
                                g_current_surface = g_key_press_surface[KEY_PRESSED_SURFACE::RIGHT];
                                break;
                        }
                    }
                }

                SDL_BlitSurface(g_current_surface, NULL, g_screen_surface, NULL);
                SDL_UpdateWindowSurface(g_window);
            }
        }
    }

    close();
    return 0;
}
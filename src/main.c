#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// GRAPHICS
#include <SDL2/SDL.h>

#define WIDTH 1280
#define HEIGHT 720

int main(int argc, char *argv[]) {
    
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *window = SDL_CreateWindow("Snake", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
    if (window == NULL) {
        fprintf(stderr, "Failed to create window: %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }
    
    SDL_Event windowEvent;

    while (true) {
        if (SDL_PollEvent(&windowEvent)) {
            if (windowEvent.type == SDL_QUIT) break;
        }
    }

    printf("Closing window");
    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}
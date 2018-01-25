#include <iostream>
#include <SDL.h>

int main() {

    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL init failed." << std::endl;
        return 1;
    }

    std::cout << "SDL init succeeded." << std::endl;

    return 0;
}
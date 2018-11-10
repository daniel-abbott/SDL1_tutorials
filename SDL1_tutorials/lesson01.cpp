// Include SDL1 functions and datatypes
#include <SDL.h>

int main(int argc, char* argv[]) {
	// Surface pointers
	SDL_Surface* hello = NULL;
	SDL_Surface* screen = NULL;

	// Start SDL
	SDL_Init(SDL_INIT_EVERYTHING);

	// Set up screen (software surface)
	screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);

	// Load the image
	hello = SDL_LoadBMP("hello.bmp");

	// Apply image to screen
	SDL_BlitSurface(hello, NULL, screen, NULL);

	// Update the screen
	SDL_Flip(screen);

	// Delay two seconds before closing
	SDL_Delay(2000);

	// Free the loaded image
	SDL_FreeSurface(hello);

	// Quit SDL
	SDL_Quit();

	return 0;
}
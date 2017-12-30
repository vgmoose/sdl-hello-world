#include <SDL2/SDL.h>

struct Graphics {
	SDL_Window* window;
	SDL_Surface* window_surface;
};

typedef struct Graphics Graphics;

Graphics* init();
void deinit(struct Graphics* g);
void update(struct Graphics* g);
void sleep(int s);
void background(struct Graphics* gr, int r, int g, int b);
void putAPixel(struct Graphics* gr, int x, int y, int r, int g, int b);
void drawString(struct Graphics* gr, char* string, int xi, int yi);
void drawColorString(struct Graphics* gr, int xi, int yi, char * string, int r, int g, int b);
char* fontLookup(char c);
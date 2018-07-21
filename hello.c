#include "draw.h"

int main()
{
	// initialize and get graphics context
	Graphics* g = init();

	// draw hello world string
	drawString(g, "Hello world!", 2, 1);

	// wait 10s
	sleep(10);
  
	// clean up graphics
	deinit(g);

	return 0;
}

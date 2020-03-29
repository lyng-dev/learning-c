/* 
	Remember to compile try:
		1) gcc hi.c -o hi -lX11
		2) gcc hi.c -I /usr/include/X11 -L /usr/X11/lib -lX11
		3) gcc hi.c -I /where/ever -L /who/knows/where -l X11

	Brian Hammond 2/9/96.    Feel free to do with this as you will!
*/


/* include the X library headers */
#include<X11/Xlib.h>
#include<X11/Xutil.h>
#include<X11/Xos.h>

/* include some silly stuff */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


/* here are our X variables */
Display     *display;
int         screen;
Window      window;
GC          gc;

/* here are our X routines declared! */
void init_x();
void close_x();
void redraw();
unsigned long _RGB(int r, int g, int b);

//I write additional function _RGB(...) where r,g,b is components in range 0...255
unsigned long _RGB(int r,int g, int b)
{
    return b + (g<<8) + (r<<16);
}

void main() {
	XEvent  event;		/* the XEvent declaration !!! */
	KeySym  key;		/* a dealie-bob to handle KeyPress Events */	
	char    text[255];		/* a char buffer for KeyPress Events */

	init_x();

	/* look for events forever... */
	while(true) {		
		/* get the next event and stuff it into our event variable.
		   Note:  only events we set the mask for are detected!
		*/
		XNextEvent(display, &event);
	
		if (event.type==Expose && event.xexpose.count==0) {
		/* the window was exposed redraw it! */
			redraw();
		}
		if (event.type==KeyPress&&
		    XLookupString(&event.xkey,text,255,&key,0)==1) {
		/* use the XLookupString routine to convert the invent
		   KeyPress data into regular text.  Weird but necessary...
		*/
			if (text[0]=='q') {
				close_x();
			}
			printf("You pressed the %c key!\n",text[0]);
		}
		if (event.type==ButtonPress) {
		/* tell where the mouse Button was Pressed */
			int x=event.xbutton.x,
			    y=event.xbutton.y;

			strcpy(text,"This is a nice program");
			XSetForeground(display,gc,_RGB(rand() % 255 + 1,rand() % 255 + 1,rand() % 255 + 1));
			XDrawString(display,window,gc,x,y, text, strlen(text));
		}
	}
}

void init_x() {
/* get the colors black and white (see section for details) */        
	unsigned long black,white;

	display     = XOpenDisplay((char *)0);
   	screen      = DefaultScreen(display);
	black       = BlackPixel(display,screen),
	white       = WhitePixel(display, screen);

   	window = XCreateSimpleWindow(display,DefaultRootWindow(display),0,0,	
		            600, 600, 5,black, white);
	XSetStandardProperties(display,window,"Howdy","Hi",None,NULL,0,NULL);
	XSelectInput(display, window, ExposureMask|ButtonPressMask|KeyPressMask);

    gc = XCreateGC(display, window, 0,0);        
	XSetBackground(display,gc,white);
	XSetForeground(display,gc,black);
	XClearWindow(display, window);
	XMapRaised(display, window);
};

void close_x() {
	XFreeGC(display, gc);
	XDestroyWindow(display,window);
	XCloseDisplay(display);	
	exit(1);				
};

void redraw() {
	//XClearWindow(display, window);
};

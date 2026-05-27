#ifndef SDL2_SDL_H
#define SDL2_SDL_H

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned char Uint8;
typedef unsigned int Uint32;

typedef struct SDL_Window SDL_Window;
typedef struct SDL_Renderer SDL_Renderer;
typedef struct SDL_Texture SDL_Texture;
typedef struct SDL_Surface SDL_Surface;

typedef struct SDL_Rect {
    int x, y, w, h;
} SDL_Rect;

typedef union SDL_Event {
    Uint32 type;
    struct {
        int button;
        int x;
        int y;
    } button;
} SDL_Event;

#ifndef SDL_MAIN_HANDLED
#define SDL_MAIN_HANDLED 1
#endif
#define SDL_INIT_VIDEO 0x00000020
#define SDL_WINDOWPOS_CENTERED 0x2FFF0000
#define SDL_RENDERER_ACCELERATED 0x00000002
#define SDL_BUTTON_LEFT 1
#define SDL_MOUSEBUTTONDOWN 0x401
#define SDL_QUIT 0x100

extern int SDL_Init(Uint32 flags);
extern void SDL_Quit(void);
extern SDL_Window* SDL_CreateWindow(const char *title, int x, int y, int w, int h, Uint32 flags);
extern void SDL_DestroyWindow(SDL_Window *window);
extern SDL_Renderer* SDL_CreateRenderer(SDL_Window *window, int index, Uint32 flags);
extern void SDL_DestroyRenderer(SDL_Renderer *renderer);
extern void SDL_SetRenderDrawColor(SDL_Renderer *renderer, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
extern int SDL_RenderClear(SDL_Renderer *renderer);
extern int SDL_RenderFillRect(SDL_Renderer *renderer, const SDL_Rect *rect);
extern int SDL_RenderDrawRect(SDL_Renderer *renderer, const SDL_Rect *rect);
extern void SDL_RenderPresent(SDL_Renderer *renderer);
extern Uint32 SDL_Delay(Uint32 ms);
extern int SDL_PollEvent(SDL_Event *event);
extern const char* SDL_GetError(void);
extern SDL_Texture* SDL_CreateTextureFromSurface(SDL_Renderer *renderer, SDL_Surface *surface);
extern int SDL_RenderCopy(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_Rect *srcRect, const SDL_Rect *dstRect);
extern void SDL_DestroyTexture(SDL_Texture *texture);
extern SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth, int pitch, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
extern void SDL_FreeSurface(SDL_Surface *surface);

#ifdef __cplusplus
}
#endif

#endif // SDL2_SDL_H

#ifndef SDL2_SDL_IMAGE_H
#define SDL2_SDL_IMAGE_H

#include <SDL2/SDL.h>

#ifdef __cplusplus
extern "C" {
#endif

#define IMG_INIT_PNG 0x00000001

extern int IMG_Init(int flags);
extern void IMG_Quit(void);
extern SDL_Surface* IMG_Load(const char *file);
#define IMG_GetError SDL_GetError

#ifdef __cplusplus
}
#endif

#endif // SDL2_SDL_IMAGE_H

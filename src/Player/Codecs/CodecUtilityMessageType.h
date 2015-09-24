#ifndef __CODEC_UTILITY_MESSAGE_TYPE_H__
#define __CODEC_UTILITY_MESSAGE_TYPE_H__

//Linux...
#ifdef __cplusplus
extern "C" {
#endif

#include "SDL2/SDL.h"

#ifdef __cplusplus
};
#endif

// 基本的播放控制命令 //
typedef enum _softwareCodecEvent {
    SOFTWARE_CODEC_EVENT_RESERVED = SDL_USEREVENT,
    SOFTWARE_CODEC_EVENT_EXIT = (SDL_USEREVENT + 1),
    SOFTWARE_CODEC_EVENT_OPEN = (SDL_USEREVENT + 2),
    SOFTWARE_CODEC_EVENT_PLAY,
    SOFTWARE_CODEC_EVENT_CLOSE,
    SOFTWARE_CODEC_EVENT_STOP,
    SOFTWARE_CODEC_EVENT_PAUSE,
    SOFTWARE_CODEC_EVENT_RESUME,
    SOFTWARE_CODEC_EVENT_SEEKTO,
    
    SOFTWARE_CODEC_EVENT_VIDEO_RESIZE,
    SOFTWARE_CODEC_EVENT_VIDEO_FULLSCREEN,
    SOFTWARE_CODEC_EVENT_VIDEO_REFRESH,


    
    SOFTWARE_CODEC_EVENT_MAX
} SoftwareCodecEvent;













#endif  //__CODEC_UTILITY_MESSAGE_TYPE_H__

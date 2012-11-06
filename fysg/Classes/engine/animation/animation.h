//
//  animation.h
//  fysg
//
//  Created by flavor on 12-11-2.
//
//

#ifndef fysg_animation_h
#define fysg_animation_h
#include <inttypes.h>

namespace engine
{
    class Animation
    {
        public:
            Animation();
            void stop(void);
            void play(void);
            void preFrame(void);
            void nextFrame(void);
            void gotoAndPlay(uint16_t frame);
            void gotoAndStop(uint16_t frame);
            ~Animation();
    };
}
#endif

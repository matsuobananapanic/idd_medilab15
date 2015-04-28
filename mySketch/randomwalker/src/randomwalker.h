//
//  RandomWalker.h
//  randomwalker
//
//  Created by labメンバー on 2015/04/28.
//
//

#pragma once
#include "ofMain.h"

class RandomWalker {
public:
    RandomWalker();
    void draw();
    void update();
    
    ofVec3f position;
};
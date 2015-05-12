//
//  RandomWalker.cpp
//  randomwalker
//
//  Created by labメンバー on 2015/04/28.
//
//

#include "RandomWalker.h"

RandomWalker::RandomWalker(){
    position.x = ofGetWidth() / 2.0;
    position.y = ofGetHeight() / 2.0;
    position.z = ofGetHeight() / 2.0;
}

void RandomWalker::update(){
    for (int i = 0; i < 10; i++) {
        position.x += ofRandom(-1.0, 1.0);
        position.y += ofRandom(-1.0, 2.0);
        ofCircle(position.x, position.y, 1);
        if (position.x < 0) {
            position.x = ofGetWidth();
        }
        if (position.x > ofGetWidth()) {
            position.x = 0;
        }
        if (position.y < 0) {
            position.y = ofGetHeight();
        }
        if (position.y > ofGetHeight()) {
            position.y = 0;
        }
    }
}

void RandomWalker::draw(){
    ofSetColor(ofRandom(0,25),ofRandom(0,255),ofRandom(200,255),ofRandom(1, 50));
}
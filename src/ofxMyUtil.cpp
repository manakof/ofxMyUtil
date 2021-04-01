#include "ofxMyUtil.h"

void ofxMyUtil::drawGrid() {
  for (int i = 0; i < ofGetWidth(); i += 50) {
    ofDrawLine(i, 0, i, ofGetHeight());
    ofDrawBitmapString(ofToString(i), i, 10);
  }
  for (int r = 0; r < ofGetHeight(); r += 50) {
    ofDrawLine(0, r, ofGetWidth(), r);
    ofDrawBitmapString(ofToString(r), 0, r);
  }
}
void ofxMyUtil::drawGrid(float step) {
  for (int i = 0; i < ofGetWidth(); i += step) {
    ofDrawLine(i, 0, i, ofGetHeight());
    ofDrawBitmapString(ofToString(i), i, 10);
  }
  for (int r = 0; r < ofGetHeight(); r += step) {
    ofDrawLine(0, r, ofGetWidth(), r);
    ofDrawBitmapString(ofToString(r), 0, r);
  }
}

void ofxMyUtil::setTurtle(float speed, ofVec2f _pos, ofVec2f stop_pos) {
  turtle_speed.x = (stop_pos.x - _pos.x) * speed;
  turtle_speed.y = (stop_pos.y - _pos.y) * speed;

  turtle_pos = _pos;
  turtleStop_pos = stop_pos;
}

void ofxMyUtil::drawTurtle() {
  if (!(turtle_pos == turtleStop_pos)) {
    // ofDrawCircle(turtle_pos.x, turtle_pos.y, 20);
    ofDrawRectangle(turtle_pos.x, turtle_pos.y, 20, 20);
    turtle_pos = turtle_pos + turtle_speed;
  }
}

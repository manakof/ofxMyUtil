#include "ofxMyUtil.h"

void ofxMyUtil::draw() {
  for (int i = 0; i < ofGetWidth(); i += 50) {
    ofDrawLine(i, 0, i, ofGetHeight());
    ofDrawBitmapString(ofToString(i), i, 10);
  }
  for (int r = 0; r < ofGetHeight(); r += 50) {
    ofDrawLine(0, r, ofGetWidth(), r);
    ofDrawBitmapString(ofToString(r), 0, r);
  }
}
void ofxMyUtil::draw(float step) {
  for (int i = 0; i < ofGetWidth(); i += step) {
    ofDrawLine(i, 0, i, ofGetHeight());
    ofDrawBitmapString(ofToString(i), i, 10);
  }
  for (int r = 0; r < ofGetHeight(); r += step) {
    ofDrawLine(0, r, ofGetWidth(), r);
    ofDrawBitmapString(ofToString(r), 0, r);
  }
}

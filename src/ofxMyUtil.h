#pragma once

#include "Turtle.h"
#include "ofMain.h"
class ofxMyUtil {
public:
  void drawGrid();
  void drawGrid(float step);

  ofVec2f turtle_speed;

  ofVec2f turtle_pos;
  ofVec2f turtleStop_pos;

  void setTurtle(float speed, ofVec2f _pos, ofVec2f stop_pos);
  void drawTurtle();
};

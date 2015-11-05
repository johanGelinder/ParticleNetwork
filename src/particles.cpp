//
//  particles.cpp
//  particleSystem
//
//  Created by Johan Gelinder on 2015-11-04.

#include "particles.h"

Particles::Particles(float _x, float _y, int _dim) {  // implementation of the constructor :: means that we are calling a function on Particles object
    
    x = _x;
    y = _y;
    dim = _dim;
    
    // random speed
    speedX = ofRandom(-1,1);
    speedY = ofRandom(-1,1);
    
    color.set(255,70); // white color with opacity
}

void Particles::update() { // implementation of the update() function of the Particles object
    
    
  /*---------------- collision ------------*/

    if(x < 50) { // checks is the x position is at the far left of the screen -50 pixels
        
        speedX *= -1;
        
    } else if (x > ofGetWidth()-50) { // checking if the x position is at the far right of the screen -50 pixels
        
        speedX *= -1; // making the ball move in the oppsite direction
        
    }
    
    if( y < 50) { // checks is the y position is at the top of the screen -50 pixels
        
        speedY *= -1;
        
    } else if (y > ofGetHeight()-50) { // checks if the y position is at the bottom of the screen -50 pixels
        
        speedY *= -1; // making the ball move in the oppsite direction
    }
    
    x += speedX; // assign speedX to the x position
    y += speedY; // assign speedY to the y position
    
}

void Particles::display() {  // display function
    
    ofSetColor(color); // assigning the color
    ofFill(); // filling the particles
    ofCircle( x, y, dim); // drawing the particles with numbers set by the constructor
    
    
}

    

//
//  particles.h
//  particleSystem
//
//  Created by Johan Gelinder on 2015-11-04.
//
//

#ifndef __particleSystem__particles__
#define __particleSystem__particles__

#include <stdio.h>
#include "ofMain.h"

class Particles {
    
public:
    
    // Methods
    
    void display(); // display method
    void update();  // update method

    
    // variables
    
    float x; // position
    float y;
    int dim; // size of the particles
    
    // speed and direction
    float speedX;
    float speedY;
    
    ofColor color; // color
    
    // Constructor which takes 3 inputs, x and y position and a diameter for the particles
    Particles(float x, float y, int dim);
    
};

#endif /* defined(__particleSystem__particles__) */
